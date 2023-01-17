# Supported development platforms:
- Windows 10+ with PowerShell and Git (x86_64)
- macOS 12+ with Command Line tools (x86_64, arm64)
- Ubuntu 20.04+ with build-essential and Git (x86_64)

Supported in-circuit debuggers (optional but highly recommended):

- [Flipper Zero Wi-Fi Development Board](https://shop.flipperzero.one/products/wifi-devboard)
- ST-Link
- J-Link

## Cloning Source Code

Ensure that you have enough space and clone source code with Git:

```shell
git clone --recursive https://github.com/skizzophrenic/SquachWare-CFW.git
```

## Building

Build firmware using Flipper Build Tool:

```shell
./fbt
```

## Flashing Firmware using an in-circuit debugger

Connect your in-circuit debugger to the Flipper and flash firmware using Flipper Build Tool:

```shell
./fbt flash
```

## Flashing Firmware using USB

Ensure that your Flipper is working, connect it using a USB cable and flash firmware using Flipper Build Tool:

```shell
./fbt flash_usb
```

## Build Update Package

Compile as an update package to run off the SDCard:

```shell
./fbt update_package
```

## Build FAPs 

Compile ONLY Flipper applications into FAP format:

```shell
./fbt fap_dist
```

## Build assets

Compile your personal assests for use with the flipper:

```shell
./fbt icons proto dolphin_internal dolphin_ext resources
```