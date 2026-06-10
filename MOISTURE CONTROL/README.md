# Soil Moisture Classification System Using Arduino

## Project Overview

This project is an Arduino-based soil moisture classification system designed and simulated in Proteus. It uses a soil moisture sensor to measure the water content present in the soil and categorizes the condition as **Dry Soil**, **Wet Soil**, or **Damp Soil**. The measured moisture percentage and soil condition are displayed through the Serial Monitor, while LEDs provide visual status indication.

This project helped me understand analog sensor interfacing, sensor calibration, serial communication, and decision-making using Arduino.

## Components Used

* Arduino Uno
* Soil Moisture Sensor Module
* Blue LED
* Orange LED
* Virtual Terminal (Proteus Serial Monitor)
* Potentiometer (for simulation adjustment)
* Capacitor
* Inductor
* Proteus 8 Professional

## Features

* Measures soil moisture level in real time.
* Converts sensor readings into moisture percentage.
* Displays moisture percentage on the Virtual Terminal.
* Classifies soil as Dry, Wet, or Damp.
* LED-based visual indication of soil condition.
* Simulated completely in Proteus.

## How It Works

The soil moisture sensor continuously measures the moisture content present in the soil and sends an analog signal to the Arduino. The Arduino reads this value through analog pin A0 and maps the sensor reading into a moisture percentage ranging from 0% to 100%.

Based on the measured moisture level, the system classifies the soil into three categories:

* **Dry Soil (Below 30%)** – Indicates insufficient moisture. The blue LED turns ON.
* **Wet Soil (30%–70%)** – Indicates an acceptable moisture level. Both LEDs turn ON.
* **Damp Soil (Above 70%)** – Indicates high moisture content. The orange LED turns ON.

The moisture percentage and corresponding soil condition are displayed on the Virtual Terminal for monitoring purposes.

## What I Learned

Through this project, I learned:

* Soil moisture sensor interfacing with Arduino
* Analog-to-digital conversion
* Sensor value mapping and calibration
* Serial communication using Arduino
* Conditional programming and decision making
* LED status indication techniques
* Proteus simulation of embedded systems

## Future Improvements

* Automatic water pump control for irrigation
* LCD or OLED display integration
* Wireless monitoring using IoT platforms
* Mobile application notifications
* Data logging for long-term soil analysis
* Multi-zone soil moisture monitoring

## Author

**Adhan Lenin**
B.Tech Mechatronics Engineering | 4th Year Student

This project is part of my Proteus learning journey, where I regularly build and upload simulations to improve my practical knowledge of electronics and embedded systems.
