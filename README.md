# Earthquake Detection and Early Warning System

## Table of Contents

* [Overview](#overview)
* [Objective](#objective)
* [Features](#features)
* [Components Required](#components-required)
* [System Architecture](#system-architecture)
* [Working Principle](#working-principle)
* [Installation & Usage](#installation--usage)
* [Future Enhancements](#future-enhancements)
* [Authors](#authors)
* [License](#license)

---

## Overview

The **Earthquake Detection and Early Warning System** is a real-time monitoring system designed to detect seismic activity and provide early warnings to minimize damage and ensure safety. Using vibration sensors, microcontrollers, and alert mechanisms like buzzer and LEDs, the system alerts users before significant ground shaking occurs.

---

## Objective

* To detect seismic vibrations in real-time.
* To provide early warnings using visual and audio alerts.
* To enhance safety and preparedness during earthquakes.

---

## Features

* Real-time vibration detection.
* Immediate alert using buzzer and LED.
* LCD display shows vibration status.
* Configurable sensitivity for earthquake detection.
* Simple and low-cost implementation suitable for educational or practical use.

---

## Components Required

**Hardware:**

* Microcontroller (Arduino)
* Vibration Sensor
* Buzzer
* LED
* I2C LCD Display (16x2)
* Jumper Wires & Breadboard
* Power Supply

**Software:**

* Arduino IDE
* `Wire.h` and `LiquidCrystal_I2C.h` libraries

---

## System Architecture

The system consists of three main modules:

1. **Sensing Module:** Vibration sensor detects seismic activity.
2. **Processing Module:** Microcontroller reads sensor data and determines if vibration exceeds a threshold.
3. **Alert & Display Module:** Alerts are issued via buzzer, LED, and LCD for real-time monitoring.

---

## Working Principle

1. The **vibration sensor** continuously detects ground movement.
2. The microcontroller reads the sensor output through its digital input pin.
3. When vibration exceeds a predefined threshold, the system triggers:

   * **Buzzer:** Produces audible alert.
   * **LED:** Visual indication of earthquake detection.
   * **LCD Display:** Shows “EARTHQUAKE DETECTED” or real-time status.
4. If no significant vibration is detected, the system remains idle or displays normal status on the LCD.

---

## Circuit 

* **Vibration Sensor** → Digital Pin 2
* **LED** → Digital Pin 8
* **Buzzer** → Digital Pin 9
* **LCD SDA & SCL** → Corresponding I2C pins on the microcontroller
* **Power Connections** → VCC & GND to respective modules

---

**Explanation:**

* The system uses a vibration sensor to detect seismic activity.
* The LCD displays current status.
* Buzzer and LED act as alerts for detected vibrations.

---

## Installation & Usage

1. Connect the hardware as per the circuit diagram.
2. Install required Arduino libraries (`Wire.h` and `LiquidCrystal_I2C.h`).
3. Upload the provided Arduino code to the microcontroller.
4. Power on the system.
5. Monitor vibration detection through LCD, LED, and buzzer alerts.

---

## Future Enhancements

* IoT integration to send alerts to smartphones in real-time.
* Sensitivity calibration for different earthquake magnitudes.
* Cloud data logging for historical analysis of seismic activity.
* Integration with automated safety mechanisms like shutting down gas or electricity during detected tremors.

---

## Authors

* **Aman Vishwash Singh** – Embedded Engineer

---

## License

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.

