![SquachWare](https://user-images.githubusercontent.com/16942638/211815956-4dd70fca-97d8-49c5-a98b-08f2c7fa8786.jpg)

# SquachWare is abandonware for the time being!  There are still some good files on it but the underlying firmware is very outdated!! I would love to resurrect the project in the future, but for now, we're on hiatus!


# SquachWare Community Firmware
SquachWare is a community driven firmware!  Our goal is to creat a firmware that has 98% of the functionality of other custom firmwares, but also be 100% legal in the process!  After having use all of the other custom firmwares, we realized that most people don't even use features that require unlocking the region lock, and we certainly don't want to include illegal addon files!  Enjoy a stable branch of the Developer branch of Official Firmware, packed with custom graphics, applications, badUSB files, IR files, SubGhz files and more!!!

FULL DOCUMENTATION INCLUDING LINKS TO ALL AUTHORS WILL BE DONE SHORTLY.
Right now I'm just getting the basics all sorted out!

# Changes
**Version 0.14**
- Added Kuronons_Misc_EscapeFrom_LA Animation

**Version 0.13**
- Added Savable Tamagotchi.
- Added French Canadian badUSB layouts.

## Included applications
Included apps and respective credit to said authers and contributors can be found here:

- [Kyhwana](https://github.com/kyhwana/latest_flipper_zero_apps)
- [UberGuidoZ/Alexei Humeniy](https://github.com/UberGuidoZ/Flipper/tree/main/Applications/Official)

Current application count: [70+](https://github.com/skizzophrenic/SquachWare-CFW/blob/dev/documentation/FAPList.md)

# How to Install
Just watch this video : https://youtu.be/A1SuDfFjUho
Follow the same instructions as far as installing RogueMaster:

Download Zip (or tgz) file from the Releases link https://github.com/skizzophrenic/SquachWare-CFW/releases/
- Extract the compressed file into a folder
- Drag that folder into the Update folder on your Flipper Zero (If you don't have one, just create a folder named Update)
- On your Flipper, press down then left to access the browser
- Navigate to Update
- Find the folder that you just dropped into the Update folder and open it
- Find the file named Update and run it
- Wait for it to install and you're done!

# Contributing
If you'd like to contribute to this project, the best way to start would be to join the Squachtopia Hangout Discord server! https://discord.gg/squachtopia


# Instructions/Documentation
- [Clone/Build firmware](https://github.com/skizzophrenic/SquachWare-CFW/blob/dev/documentation/CloneFW.md) - How to clone the repo and build/modify your own firmware using SW-CFW as a base.
- [Rename Flipper](https://github.com/skizzophrenic/SquachWare-CFW/blob/dev/documentation/NameChange.md) - Change the name of your Flipper quickly and easily!
- [Official Documentation](https://github.com/skizzophrenic/SquachWare-CFW/blob/dev/documentation/OfficialDocumentation.md) - Documentation provided by the Flipper team!

# Links
- Discord: https://discord.gg/squachtopia
- Website: http://talkingsasquach.com (soon)


# Project structure
- `applications`    - Applications and services used in firmware
- `assets`          - Assets used by applications and services
- `furi`            - Furi Core: OS-level primitives and helpers
- `debug`           - Debug tool: GDB-plugins, SVD-file and etc
- `documentation`   - Documentation generation system configs and input files
- `firmware`        - Firmware source code
- `lib`             - Our and 3rd party libraries, drivers, etc.
- `scripts`         - Supplementary scripts and python libraries home

Also, pay attention to `ReadMe.md` files inside those directories.
