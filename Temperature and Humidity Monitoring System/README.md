# Temperature and Humidity Monitoring System Using DHT11

## Project Overview

This project is an Arduino-based temperature and humidity monitoring system designed and simulated in Proteus. It uses a DHT11 sensor to measure environmental temperature and humidity levels in real time. The measured values are displayed on a 16×2 LCD, while relays automatically control external devices such as a fan and a lamp based on predefined threshold values.

This project helped me understand digital sensor interfacing, environmental monitoring, relay control, and LCD communication using Arduino.

## Components Used

* Arduino Uno
* DHT11 Temperature and Humidity Sensor
* 16×2 LCD Display
* Relay Modules
* DC Fan
* Lamp
* BC547 Transistor
* Potentiometer
* Proteus 8 Professional

## Features

* Measures temperature and humidity in real time.
* Displays sensor readings on a 16×2 LCD.
* Automatically controls a fan based on temperature.
* Automatically controls a lamp based on humidity level.
* Uses relays to switch external loads.
* Simulated completely in Proteus.

## How It Works

The DHT11 sensor continuously measures the surrounding temperature and humidity and sends the data to the Arduino. The Arduino processes these readings and compares them with predefined threshold values.

For humidity monitoring:

* If humidity exceeds 79%, the humidity relay is activated.
* If humidity is below 79%, the relay remains OFF.

For temperature monitoring:

* If temperature exceeds 25°C, the temperature relay is activated, turning the fan ON.
* If temperature is below 25°C, the relay remains OFF.

The current status and sensor values are displayed on the LCD, allowing users to monitor environmental conditions easily.

## What I Learned

Through this project, I learned:

* DHT11 sensor interfacing with Arduino
* Temperature and humidity measurement
* LCD interfacing and display control
* Relay and transistor-based load switching
* Environmental monitoring systems
* Conditional programming and automation
* Proteus simulation of embedded systems

## Future Improvements

* IoT-based remote monitoring
* Data logging and trend analysis
* Mobile application integration
* Adjustable temperature and humidity thresholds
* Multiple sensor support for larger environments
* Automatic climate control system

## Author

**Adhan Lenin**
B.Tech Mechatronics Engineering | 4th Year Student

This project is part of my Proteus learning journey, where I regularly build and upload simulations to improve my practical knowledge of electronics and embedded systems.
