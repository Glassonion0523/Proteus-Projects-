# Temperature Monitoring System Using LM35 and Arduino

## Project Overview

This project is an Arduino-based temperature monitoring system designed and simulated in Proteus. It uses an LM35 temperature sensor to measure ambient temperature and displays the temperature in both Celsius and Fahrenheit on a 16×2 LCD screen.

The project helped me understand analog sensor interfacing, analog-to-digital conversion, temperature measurement, and LCD communication using Arduino.

## Components Used

* Arduino Uno
* LM35 Temperature Sensor
* 16×2 LCD Display
* 10kΩ Potentiometer
* Proteus 8 Professional

## Features

* Measures ambient temperature in real time.
* Displays temperature in Celsius (°C).
* Displays temperature in Fahrenheit (°F).
* Continuous temperature monitoring.
* User-friendly LCD interface.
* Simulated completely in Proteus.

## How It Works

The LM35 sensor produces an analog output voltage proportional to the surrounding temperature. This analog signal is read by the Arduino through one of its analog input pins.

The Arduino converts the sensor voltage into temperature values in Celsius and then calculates the equivalent Fahrenheit value. Both readings are displayed on the 16×2 LCD screen, allowing real-time monitoring of environmental temperature.

The potentiometer is used to adjust the LCD display contrast for better visibility.

## What I Learned

Through this project, I learned:

* LM35 sensor interfacing with Arduino
* Analog-to-digital conversion (ADC)
* Temperature measurement principles
* LCD interfacing and display control
* Data conversion between Celsius and Fahrenheit
* Proteus simulation of embedded systems

## Future Improvements

* Temperature threshold alerts
* Buzzer-based warning system
* Data logging and storage
* Wireless temperature monitoring
* IoT dashboard integration
* Multi-sensor temperature monitoring

## Author

**Adhan Lenin**
B.Tech Mechatronics Engineering Student

This project is part of my Proteus learning journey, where I regularly build and upload simulations to improve my practical knowledge of electronics and embedded systems.
