# biogrip-arm-v1
# BioGrip Kinematics 🦾

**Democratizing mobility with affordable, 3D-printed bionic prosthetics.**

BioGrip Kinematics is a pioneering medical hardware startup based in Bangladesh, focused on restoring functional independence for individuals with upper-limb differences. Our core product is an advanced, sensor-driven bionic arm designed to be robust, intuitive, and highly affordable.

## 🚀 Key Features
* **Individual Finger Control:** Independent finger articulation driven by flex and EMG sensors.
* **Zero Training Required:** Intuitive movement mapped directly from natural hand reflexes.
* **Affordable Scaling:** 3D-printed chassis (PLA/PETG/ABS) minimizing manufacturing overhead.
* **Gesture Capabilities:** Supports basic sign language communication.

## 🛠️ Tech Stack & Hardware Components
* **Microcontroller:** Arduino Uno R3 (Transitioning to Nano)
* **Actuators:** 5x MG996R Servo Motors
* **Sensors:** Analog Flex Sensors
* **Driver:** PCA9685 16-Channel PWM Servo Driver
* **Power:** 1550mAh LiPo Battery (2S/3S)

## 📁 Repository Structure
- `/firmware`: Arduino source code and I2C integration.
- `/hardware/3d_cad_models`: 3D printable files for the chassis and artificial tendons.
- `/hardware/pcb_design`: Custom PCB layout for the central processing unit.
- `/hardware/material_specifications.md`: Specific volume, density, and print settings for PLA, PETG, and ABS filaments.
- `/docs`: Clinical trial logs and research references.
- `/operations_and_supply_chain`: Bill of Materials (BOM) and vendor list.

## ⚙️ Setup & Calibration
*(Details on how to wire the PCA9685 and calibrate the flex sensor analog limits will be documented here.)*

---
© 2024 BioGrip Kinematics. All rights reserved.
