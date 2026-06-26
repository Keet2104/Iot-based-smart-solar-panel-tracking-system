# IoT-Based Smart Solar Panel Tracking System with Environmental Monitoring

## Project Overview

The IoT-Based Smart Solar Panel Tracking System is an Arduino-based embedded system designed to maximize solar energy harvesting by automatically aligning a solar panel toward the direction of maximum sunlight.

The system uses two Light Dependent Resistors (LDRs) to detect the intensity of sunlight on either side of the panel. Based on the sensor readings, a servo motor rotates the solar panel to face the brightest light source. This improves the efficiency of solar energy collection compared to a fixed solar panel.

In addition to solar tracking, the system also supports environmental monitoring using a DHT11 temperature and humidity sensor and a rain sensor. These sensors provide additional environmental information and can be extended for smart energy management applications.

---

# Problem Statement

Traditional solar panels are installed at a fixed angle, resulting in reduced energy generation as the position of the sun changes throughout the day. A smart solar tracking system is required to continuously align the solar panel toward the maximum light source, thereby increasing solar energy harvesting efficiency.

---

# Objectives

- Automatically detect the direction of maximum sunlight.
- Rotate the solar panel using a servo motor.
- Increase solar energy harvesting efficiency.
- Monitor environmental conditions.
- Build an IoT-ready embedded system.

---

# Features

- Automatic solar tracking using LDR sensors
- Servo motor-based panel positioning
- Temperature and humidity monitoring
- Rain detection
- Expandable IoT architecture
- Low-cost embedded system

---

# Hardware Components

- Arduino Uno
- SG90 Servo Motor
- Mini Solar Panel
- 2 × LDR Sensors
- 2 × 10kΩ Resistors
- Breadboard
- Jumper Wires
- DHT11 Sensor
- Rain Sensor Module

---

# Software Used

- Arduino IDE
- GitHub
- Fritzing
- EasyEDA

---

# Working Principle

1. The LDR sensors continuously measure light intensity.
2. The Arduino compares both sensor values.
3. If the left sensor receives more light, the servo rotates the panel left.
4. If the right sensor receives more light, the servo rotates the panel right.
5. When both sensors receive nearly equal light, the panel stops moving.
6. The DHT11 measures temperature and humidity.
7. The rain sensor detects rainfall for future protection features.

---

# Applications

- Smart Solar Farms
- Residential Solar Systems
- Industrial Solar Installations
- Renewable Energy Research
- IoT-based Energy Monitoring

---

# Future Enhancements

- Wi-Fi Cloud Monitoring
- Mobile Application
- Automatic Cleaning System
- Dual Axis Solar Tracking
- Battery Management System

---

# Repository Contents

- Solar_Tracker.ino
- Project_Report.pdf
- circuit_diagram.png
- pcb_layout.png
- hardware_prototype.jpg
- Gerber_Files.zip

---

# Author

Sucharita

Department of Electronics and Communication Engineering
