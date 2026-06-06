# Smart Street Lamp Monitoring System Using Arduino

## Project Overview

This project is an Arduino-based smart street lighting system designed and simulated in Proteus. It uses a Light Dependent Resistor (LDR) to measure ambient light intensity and automatically determine lighting conditions. The system displays the current light level status on a 16×2 LCD and uses LEDs to represent different lighting conditions.

This project helped me understand analog sensor interfacing, LCD communication, and environmental monitoring using Arduino.

## Components Used

* Arduino Uno
* LDR (Light Dependent Resistor)
* 10kΩ Resistor
* 16×2 LCD Display
* LEDs
* Proteus 8 Professional

## Features

* Monitors ambient light intensity in real time.
* Displays light condition on a 16×2 LCD.
* Indicates different lighting levels using LEDs.
* Detects low-light and normal-light conditions.
* Simulated completely in Proteus.

## How It Works

The LDR senses the surrounding light intensity and produces a varying voltage based on the amount of light falling on it. The Arduino reads this analog value and compares it with predefined thresholds.

Based on the detected light level, the system classifies the environment as either low light or normal light. The corresponding status is displayed on the LCD screen, and LEDs are activated to indicate the current lighting condition.

This concept is similar to the automatic lighting systems used in modern street lamps and smart city applications.

## What I Learned

Through this project, I learned:

* LDR interfacing with Arduino
* Analog-to-digital conversion
* LCD interfacing and display control
* Sensor data processing
* Environmental monitoring concepts
* Proteus simulation of embedded systems

## Future Improvements

* Automatic brightness control using PWM
* Real street lamp switching through relays
* Wireless monitoring system
* IoT-based street light management
* Power consumption analysis and reporting

## Author

**Adhan Lenin**
B.Tech Mechatronics Engineering | 4th Year Student

This project is part of my Proteus learning journey, where I regularly build and upload simulations to improve my practical knowledge of electronics and embedded systems.
