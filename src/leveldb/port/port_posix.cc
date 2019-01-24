// Copyright (c) 2011 The LevelDB Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#include "port/port_posix.h"

#include <cstdlib>
#include <stdio.h>
#include <string.h>

#if (defined(__x86_64__) || defined(__i386__)) && defined(__GNUC__)
#include <cpuid.h>
#endif

namespace leveldb {
namespace port {

static void PthreadCall(const char* label, int result) {
  if (result != 0) {
    fprintf(stderr, "pthread %s: %s\n", label, strerror(result));
    abort();
  }
}

Mutex::Mutex() { PthreadCall("init mutex", pthread_mutex_init(&mu_, NULL)); }

Mutex::~Mutex() { PthreadCall("destroy mutex", pthread_mutex_destroy(&mu_)); }

void Mutex::Lock() { PthreadCall("lock", pthread_mutex_lock(&mu_)); }

void Mutex::Unlock() { PthreadCall("unlock", pthread_mutex_unlock(&mu_)); }

CondVar::CondVar(Mutex* mu)
    : mu_(mu) {
    PthreadCall("init cv", pthread_cond_init(&cv_, NULL));
}

CondVar::~CondVar() { PthreadCall("destroy cv", pthread_cond_destroy(&cv_)); }

void CondVar::Wait() {
  PthreadCall("wait", pthread_cond_wait(&cv_, &mu_->mu_));
}

void CondVar::Signal() {
  PthreadCall("signal", pthread_cond_signal(&cv_));
}

void CondVar::SignalAll() {
  PthreadCall("broadcast", pthread_cond_broadcast(&cv_));
}

void InitOnce(OnceType* once, void (*initializer)()) {
  PthreadCall("once", pthread_once(once, initializer));
}

bool HasAcceleratedCRC32C() {
#if (defined(__x86_64__) || defined(__i386__)) && defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  __get_cpuid(1, &eax, &ebx, &ecx, &edx);
  return (ecx & (1 << 20)) != 0;
#else
  return false;
#endif
}
// For further improvements see Intel publication at:
// http://download.intel.com/design/intarch/papers/323405.pdf
uint32_t AcceleratedCRC32C(uint32_t crc, const char* buf, size_t size) {
#if !defined(LEVELDB_PLATFORM_POSIX_SSE)
  return 0;
#else

  const uint8_t *p = reinterpret_cast<const uint8_t *>(buf);
  const uint8_t *e = p + size;
  uint32_t l = crc ^ 0xffffffffu;

#define STEP1 do {                              \
    l = _mm_crc32_u8(l, *p++);                  \
} while (0)
#define STEP4 do {                              \
    l = _mm_crc32_u32(l, LE_LOAD32(p));         \
    p += 4;                                     \
} while (0)
#define STEP8 do {                              \
    l = _mm_crc32_u64(l, LE_LOAD64(p));         \
    p += 8;                                     \
} while (0)

  if (size > 16) {
    // Process unaligned bytes
    for (unsigned int i = reinterpret_cast<uintptr_t>(p) % 8; i; --i) {
      STEP1;
    }

    // _mm_crc32_u64 is only available on x64.
#if defined(_M_X64) || defined(__x86_64__)
    // Process 8 bytes at a time
    while ((e-p) >= 8) {
      STEP8;
    }
    // Process 4 bytes at a time
    if ((e-p) >= 4) {
      STEP4;
    }
#else  // !(defined(_M_X64) || defined(__x86_64__))
    // Process 4 bytes at a time
    while ((e-p) >= 4) {
      STEP4;
    }
#endif  // defined(_M_X64) || defined(__x86_64__)
  }
  // Process the last few bytes
  while (p != e) {
    STEP1;
  }
#undef STEP8
#undef STEP4
#undef STEP1
  return l ^ 0xffffffffu;
#endif  // defined(LEVELDB_PLATFORM_POSIX_SSE)
}
}  // namespace port
}  // namespace leveldb
