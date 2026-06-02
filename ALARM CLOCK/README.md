# Arduino Alarm Clock using RTC DS1307

## Project Overview

This project is a simple Arduino-based alarm clock designed and simulated in Proteus. It uses a DS1307 Real-Time Clock (RTC) module to keep track of the current time and date, an LCD display to show the information, and a buzzer to alert the user when the preset alarm time is reached.

The project helped me understand how real-time clock modules communicate with Arduino using I2C communication, how LCD interfacing works, and how EEPROM can be used to store alarm settings.

## Components Used

* Arduino Uno
* DS1307 RTC Module
* 16x2 LCD Display
* Push Buttons
* Buzzer
* Proteus 8 Professional

## Features

* Displays current time and date in real time.
* Allows the user to set an alarm using push buttons.
* Stores alarm settings in EEPROM memory.
* Triggers a buzzer when the alarm time matches the current time.
* Simulated completely in Proteus.

## How It Works

The DS1307 RTC module continuously keeps track of the current time and date. The Arduino reads this information and displays it on the LCD screen.

Three push buttons are used for:

* **SET** – Enter alarm-setting mode.
* **INC** – Increase hours or minutes.
* **NEXT** – Move between hour and minute settings.

Once the alarm time is configured, it is stored in EEPROM so that the value remains available during operation. When the current RTC time matches the stored alarm time, the buzzer is activated and a wake-up message is displayed on the LCD.

## What I Learned

Through this project, I learned:

* RTC interfacing with Arduino
* I2C communication basics
* LCD interfacing
* EEPROM data storage
* Button-based user input handling
* Proteus simulation of embedded systems

## Future Improvements

* Multiple alarm support
* Snooze functionality
* 12-hour and 24-hour format selection
* Battery backup simulation
* Better user interface for alarm configuration

## Author

**Adhan Lenin**
B.Tech Mechatronics Engineering | 4th Year Student

This project is part of my Proteus learning journey, where I regularly build and upload simulations to improve my practical knowledge of electronics and embedded systems.

