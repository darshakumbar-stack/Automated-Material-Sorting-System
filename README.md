# Automated Material Sorting System

## Overview

The Automated Material Sorting System is an Arduino-based embedded system designed to detect and separate metal and non-metal objects automatically.

The system uses:

- Inductive Sensor
- Photoelectric Sensor
- Servo Motor
- I2C LCD Display
- Arduino UNO

When an object is detected, the sensors identify its type. 
The servo motor diverts the object to the correct bin while the LCD displays the running count.

---

## Features

 Delta PLC

 WPL Software 

 Automatic Metal Detection

 Automatic Non-Metal Detection

 Servo-Based Sorting

 LCD Count Display

 Real-Time Object Counting

---

## Components Used

- Delta PLC
- Arduino UNO
- Inductive Sensor
- Photoelectric Sensor
- Servo Motor SG90
- I2C LCD 16x2
- Conveyor Belt
- Voltage Step Down Module
- Jumper Wires
- Power Supply

---

## Working Principle

1. Object moves on conveyor.
2. Photoelectric sensor detects object.
3. Inductive sensor checks whether it is metal.
4. PLC controls the sensor and Conveyor speed 
5. Arduino processes sensor signals.
6. Servo motor diverts the object.
7. LCD updates metal/non-metal count.

---

## Pin Connections

| Component | Arduino Pin |
|------------|-------------|
| Metal Sensor | D2 |
| Non-metal Sensor | D3 |
| Servo Motor | D9 |
| LCD SDA | SDA |
| LCD SCL | SCL |

---

## Project Images

(Add images here)

---

## Circuit Diagram

(Add diagram here)

---

## Demo Video

(Add YouTube or video link)

---

## Future Improvements

- IoT Monitoring
- AI-based Material Recognition
- Camera Integration
- Cloud Data Logging
- Mobile App Monitoring

---

## Author

Darshan G

Electronics and Communication Engineering
