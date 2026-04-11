# BioGrip Kinematics - Firmware

This directory contains the source code for the BioGrip bionic arm. The code is written for the Arduino Uno R3 and interfaces with an Adafruit PCA9685 16-Channel PWM Servo Driver.

## 🛠️ Dependencies
To compile and upload this code, you need to install the following library in your Arduino IDE:
* `Adafruit PWM Servo Driver Library` by Adafruit (Version 2.4.1 or higher)

## 📂 Folder Structure
* **/biogrip_main:** The primary production firmware. 
  * `config.h` contains all pin mappings and servo calibration limits. Edit this file before uploading to a new arm.
* **/servo_calibration_test:** A utility script to safely sweep servos and find the optimal `SERVOMIN` and `SERVOMAX` values without stripping the gear teeth.

## ⚙️ How to Upload
1. Open `biogrip_main/biogrip_main.ino` in Arduino IDE.
2. Select your board (`Arduino Uno`) and the correct COM port.
3. Verify the connections (SDA to A4, SCL to A5) and click Upload.
