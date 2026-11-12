# API Reference

## Core Application

### main.h

```c
void app_main(void);
```

Application entry point. Called once during system initialization.

---

## HAL (Hardware Abstraction Layer)

*To be populated with HAL function signatures*

### GPIO Control

```c
void hal_gpio_init(uint32_t pin);
void hal_gpio_set(uint32_t pin, uint8_t value);
uint8_t hal_gpio_get(uint32_t pin);
```

### UART Communication

```c
int hal_uart_init(uint32_t baudrate);
int hal_uart_write(const uint8_t *buffer, size_t length);
int hal_uart_read(uint8_t *buffer, size_t length);
```

### I2C Communication

```c
int hal_i2c_init(uint32_t frequency);
int hal_i2c_write(uint8_t device_addr, const uint8_t *data, size_t length);
int hal_i2c_read(uint8_t device_addr, uint8_t *data, size_t length);
```

---

## Driver Layer

*To be populated with driver-specific APIs*

---

## Contribution

When adding new modules:
1. Define public APIs in `/include`
2. Implement in `/src`
3. Add documentation here
4. Update architecture diagram if needed

For detailed implementation guidance, see [CONTRIBUTING.md](../CONTRIBUTING.md).
