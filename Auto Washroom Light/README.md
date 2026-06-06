# Auto Washroom Light Using Arduino

## Project Overview

This project is an Arduino-based automatic washroom lighting system designed and simulated in Proteus. It uses an IR obstacle sensor to detect the presence of a person and automatically controls a light through a relay module. The system helps reduce energy wastage by ensuring that lights are switched ON only when required.

This project helped me understand sensor interfacing, relay control, and basic automation concepts using Arduino.

## Components Used

* Arduino Uno
* IR Obstacle Sensor
* Relay Module (5V)
* Lamp (AC Load Simulation)
* Proteus 8 Professional

## Features

* Automatically detects the presence of a person.
* Turns the light ON when movement is detected.
* Turns the light OFF when no person is present.
* Uses a relay for controlling electrical loads.
* Simulated completely in Proteus.

## How It Works

The IR obstacle sensor continuously monitors the area in front of it. When a person enters the washroom, the sensor detects the obstacle and sends a signal to the Arduino.

The Arduino processes this input and activates the relay module, which switches the connected lamp ON. When the person leaves and no obstacle is detected, the Arduino deactivates the relay and the lamp turns OFF.

This automatic operation helps improve convenience and reduces unnecessary power consumption.

## What I Learned

Through this project, I learned:

* IR sensor interfacing with Arduino
* Relay module operation
* Digital input and output control
* Basic home automation concepts
* Proteus simulation of embedded systems

## Future Improvements

* Adjustable delay before turning OFF the light
* Motion detection using PIR sensors
* Multiple sensor support for larger areas
* Energy consumption monitoring
* Integration with smart home systems

## Author

**Adhan Lenin**
B.Tech Mechatronics Engineering | 4th Year Student

This project is part of my Proteus learning journey, where I regularly build and upload simulations to improve my practical knowledge of electronics and embedded systems.
