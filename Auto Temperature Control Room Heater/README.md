# Automatic Temperature Control Room Heater Using Arduino

## Project Overview

This project is an Arduino-based automatic room heater control system designed and simulated in Proteus. It uses an LM35 temperature sensor to continuously monitor the ambient temperature and automatically controls a heater through a relay module.

When the temperature falls below a predefined threshold, the heater is turned ON automatically. Once the temperature rises above the threshold, the heater is switched OFF. This project demonstrates the basic principles of temperature-based automation and environmental control.

## Components Used

* Arduino Uno
* LM35 Temperature Sensor
* Relay Module (5V)
* Heater (Simulated Load)
* 16×2 LCD Display
* AC Voltage Source
* Proteus 8 Professional

## Features

* Real-time temperature monitoring.
* Automatic heater control based on room temperature.
* Displays current temperature on the LCD.
* Shows heater status (ON/OFF).
* Relay-controlled heater operation.
* Simulated completely in Proteus.

## How It Works

The LM35 temperature sensor continuously measures the surrounding temperature and sends an analog voltage signal to the Arduino.

The Arduino reads the sensor value through analog pin A0 and converts it into temperature in degrees Celsius. The measured temperature is displayed on the LCD screen.

The system compares the temperature against a predefined threshold value:

* **Temperature below 20°C** → Heater turns ON.
* **Temperature above or equal to 20°C** → Heater turns OFF.

A relay is used to safely switch the heater load based on the Arduino's output signal.

This automatic operation helps maintain a comfortable room temperature while reducing manual intervention.

## What I Learned

Through this project, I learned:

* LM35 temperature sensor interfacing
* Analog-to-digital conversion (ADC)
* Relay control using Arduino
* Temperature-based automation
* LCD interfacing and display control
* Sensor data processing
* Proteus simulation of embedded systems

## Future Improvements

* User-adjustable temperature setpoint
* Temperature history logging
* LCD menu for configuration
* Buzzer alert for extreme temperatures
* IoT-based remote monitoring and control
* PID-based temperature regulation

## Author

**Adhan Lenin**
B.Tech Mechatronics Engineering Student

This project is part of my Proteus learning journey, where I regularly build and upload simulations to improve my practical knowledge of electronics and embedded systems.
