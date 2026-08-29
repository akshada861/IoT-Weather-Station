# 🌦️ IoT Weather Station

## 📌 Overview

The IoT Weather Station is an Arduino-based project that measures environmental temperature and humidity using a DHT22 sensor.

The sensor readings are displayed through the Serial Monitor. The project can also be simulated using Wokwi without physical hardware.

## 🎯 Objectives

- Measure temperature and humidity.
- Understand sensor interfacing with Arduino.
- Display real-time environmental data.
- Learn basic IoT and embedded system concepts.
- Simulate the project without physical hardware.

## 🛠️ Components Required

- Arduino Uno
- DHT22 Temperature and Humidity Sensor
- Jumper wires
- Breadboard

## 🔌 Pin Configuration

| DHT22 | Arduino Uno |
|---|---|
| VCC | 5V |
| DATA | Digital Pin 2 |
| GND | GND |

## ⚙️ Working

1. Arduino starts the DHT22 sensor.
2. The DHT22 measures temperature and humidity.
3. Arduino reads the sensor values.
4. The readings are displayed on the Serial Monitor.
5. New readings are taken every 2 seconds.

## 📊 Example Output

```text
================================
       IoT WEATHER STATION
================================
Weather monitoring started...

Temperature: 25.00 °C
Humidity: 50.00 %
-------------------------------

Temperature: 26.00 °C
Humidity: 52.00 %
-------------------------------
