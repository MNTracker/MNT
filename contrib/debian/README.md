
Debian
====================
This directory contains files used to package mntd/mnt-qt
for Debian-based Linux systems. If you compile mntd/mnt-qt yourself, there are some useful files here.

## mnt: URI support ##


mnt-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mnt-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mntqt binary to `/usr/bin`
and the `../../share/pixmaps/mnt128.png` to `/usr/share/pixmaps`

mnt-qt.protocol (KDE)

