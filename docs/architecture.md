# Architecture Overview

## System Architecture

```
┌─────────────────────────────────────┐
│     Application Layer               │
│  (Application Logic, Tasks)         │
└──────────────┬──────────────────────┘
               │
┌──────────────▼──────────────────────┐
│     Hardware Abstraction Layer      │
│  (HAL - GPIO, UART, SPI, I2C, etc)  │
└──────────────┬──────────────────────┘
               │
┌──────────────▼──────────────────────┐
│     Device Drivers                  │
│  (Sensors, Peripherals, etc)        │
└──────────────┬──────────────────────┘
               │
┌──────────────▼──────────────────────┐
│     ESP32 MCU Hardware              │
│  (CPU, Memory, Peripherals)         │
└─────────────────────────────────────┘
```

## Directory Organization

### `/src`
Main application and implementation files:
- `main.c` - Application entry point
- `drivers/` - Hardware-specific drivers
- `hal/` - Hardware Abstraction Layer implementations
- `app/` - Application-level logic and tasks

### `/include`
Header files defining public interfaces and APIs for all modules.

### `/lib`
Third-party libraries and dependencies.

### `/tests`
Unit tests for core functionality.

### `/config`
Build and configuration files (CMakeLists.txt, sdkconfig templates).

### `/docs`
Documentation including pinout diagrams, API references, and design notes.

## Module Dependencies

- **Application** depends on HAL and Drivers
- **Drivers** depend on HAL
- **HAL** depends only on ESP32 SDK/Framework
- No circular dependencies

## Build Flags

Configure build-time options in `config/` for different variants or features.
