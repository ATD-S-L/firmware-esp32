# Configuration Templates

This directory contains configuration templates for different build systems and frameworks.

## ESP-IDF Configuration

For ESP-IDF projects:
- `sdkconfig.defaults` - Default configuration values
- `sdkconfig.ci` - CI/CD build configuration

## PlatformIO Configuration

For PlatformIO projects:
- `platformio.ini` - Project configuration

## Arduino Configuration

For Arduino IDE projects:
- Update board settings in the IDE: Tools → Board → ESP32

## Build Options

Configure the following as needed:
- Target ESP32 variant (ESP32, ESP32-S3, ESP32-C3, etc.)
- Optimization level (debug, release)
- Component selection
- Partition scheme
