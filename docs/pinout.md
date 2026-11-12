# Pinout Configuration

## ESP32 DevKit v4 (Common Reference)

### Power Pins
- **3V3**: 3.3V Power Supply
- **GND**: Ground (multiple pins available)
- **5V**: 5V Power (if USB powered)

### UART/Serial
- **TX (GPIO1)**: UART0 Transmit
- **RX (GPIO3)**: UART0 Receive

### SPI
- **GPIO5**: SPI SCLK (Clock)
- **GPIO18**: SPI SCLK (alternate)
- **GPIO19**: SPI MISO (Master In, Slave Out)
- **GPIO23**: SPI MOSI (Master Out, Slave In)

### I2C
- **GPIO21**: I2C SDA (Data)
- **GPIO22**: I2C SCL (Clock)

### GPIO Pins (Available for general use)
- GPIO0, GPIO2, GPIO4, GPIO12, GPIO13, GPIO14, GPIO15, GPIO25, GPIO26, GPIO27, GPIO32, GPIO33

## Notes

- GPIO0, GPIO2, GPIO4, GPIO15 have special functions during boot
- GPIO6-GPIO11 are reserved for SPI flash
- Refer to the official [ESP32 Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf) for complete pinout

## Custom Board Configuration

Update this file when using custom PCB designs or different ESP32 variants.
