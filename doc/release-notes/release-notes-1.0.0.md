MNT Core version 1.0.0 is now available from:

  <https://github.com/MNTracker/MNT/releases>

This is a new minor-revision version release, including various bug fixes and
performance improvements, as well as updated translations.

Please report bugs using the issue tracker at github:

  <https://github.com/MNTracker/MNT/issues>

Mandatory Update
==============

MNT Core v1.0.1 is a mandatory update for all users. This release contains a new core base (PIVx 3.1 fork) and major protocol changes that are not backwards compatible with any older versions of MNT clients.

How to Install / Upgrade
==============

If you are running an older version, shut it down. Wait until it has completely shut down (which might take a few minutes for older versions), then run the installer (on Windows) or just copy over /Applications/MNT-Qt (on Mac) or mntd/mnt-qt (on Linux).

Compatibility
==============

MNT Core is extensively tested on multiple operating systems using
the Linux kernel, macOS 10.8+, and Windows Vista and later.

Microsoft ended support for Windows XP on [April 8th, 2014](https://www.microsoft.com/en-us/WindowsForBusiness/end-of-xp-support),
No attempt is made to prevent installing or running the software on Windows XP, you
can still do so at your own risk but be aware that there are known instabilities and issues.
Please do not report issues about Windows XP to the issue tracker.

MNT Core should also work on most other Unix-like systems but is not
frequently tested on them.

### :exclamation::exclamation::exclamation: MacOS 10.13 High Sierra :exclamation::exclamation::exclamation:

**Currently there are issues with the 3.0.x gitian releases on MacOS version 10.13 (High Sierra), no reports of issues on older versions of MacOS.**


Notable Changes
===============

With this new client we are switching from a hybrid Proof-of-Work/Proof-of-Stake (POW/POS) network to a full Proof-Of-Stake based network. The reward distribution has been redesigned, detailed information and links are available in the repository README.md.

User Experience
--------------

### Graphical User Interface

The visual layout of the MNT Qt wallet has undergone a complete overhaul.
The overview tab has been simplified greatly to display only balances that are active or relevant, also a reward section has been added.

### Wallet Options

-	The stake split threshold (default: 2000) can now be set via the wallet options.
-	“Unlock for staking and anonymization only” is selected by default when unlocking the wallet from the User Interface

Technical Changes
--------------

Due to the recent issues and vulnerabilities found on ZeroCoin protocol we will not be activating it for the launch. We do not rule out using obfuscation mechanisms in the future but only from well tested solutions as we cannot afford the maintenance overhead should any issue arise (exchanges, collaterals…) with our present resources/team/support available.

1.0.0 Change log
=================

Initial release.
 
## Credits

- Bitcoin Core Team
- Dash Team
- PIVx Team
- MNT Team

