# fse_code_esp32

## Embedded Systems Fundamentals (FSE)

This repository contains the code for the **Embedded Systems Fundamentals (FSE)** project, developed for ESP32 using the **ESP-IDF framework**.

## Prerequisites

Before running the project, ensure you have the following dependencies installed:

- **ESP-IDF (Espressif IoT Development Framework)**
  - Follow the official installation guide: [ESP-IDF Setup Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html)
- **Python 3** (required for ESP-IDF tools)
- **USB-to-serial drivers** (if necessary, for flashing the ESP32)

## Setting Up the Environment

1. **Clone the repository**
   ```bash
   git clone https://github.com/Philipe/fse_code_esp32.git
   cd fse_code_esp32
   ```

2. **Activate the ESP-IDF environment**
   
   Locate the directory where ESP-IDF is installed and source the `export.sh` script. For example:
   ```bash
   source /path/to/esp-idf/export.sh
   ```
   Replace `/path/to/esp-idf/` with the actual installation path of ESP-IDF on your system.

## Building and Flashing the Project

### Manual Execution (Alternative)
If you prefer to execute the commands manually, follow these steps:

1. **Build the project**
   ```bash
   idf.py build
   ```

2. **Flash the firmware to the ESP32**
   ```bash
   idf.py -p /dev/ttyUSB0 flash
   ```

3. **Monitor the ESP32 output**
   ```bash
   idf.py -p /dev/ttyUSB0 monitor
   ```

Replace `/dev/ttyUSB0` with the correct port if needed (use `ls /dev/tty*` to find it).

## Notes
- The `fullclean` command (`idf.py fullclean`) is available but **not required** in most cases.
- If you encounter permission issues when accessing `/dev/ttyUSB0`, you may need to add your user to the `dialout` group:
  ```bash
  sudo usermod -aG dialout $USER
  ```
  Then, log out and log back in for the changes to take effect.

