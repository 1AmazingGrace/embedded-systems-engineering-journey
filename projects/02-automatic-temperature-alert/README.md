# Project 02: Automatic Temperature Monitoring and Alert System

## 1. Project Overview

This project is an automatic temperature monitoring and alert system built using an Arduino Uno and a TMP36 temperature sensor.

The system continuously measures temperature and activates a visual and audible alert when the temperature reaches or exceeds a predefined threshold of 30°C.

The project was developed and tested using Tinkercad Circuits.

## 2. Project Objectives

- Read temperature using a TMP36 analog temperature sensor.
- Convert the sensor's analog output into temperature in degrees Celsius.
- Display temperature readings through the Serial Monitor.
- Activate an LED and piezo buzzer when the temperature reaches 30°C or above.
- Turn off both alert outputs when the temperature falls below 30°C.

## 3. Components Used

- Arduino Uno R3
- TMP36 temperature sensor
- Red LED
- 220Ω resistor
- Piezo buzzer
- Breadboard
- Jumper wires

## 4. Circuit Connections

### TMP36 Temperature Sensor

With the flat face of the TMP36 facing you and its legs pointing downward:

| TMP36 Pin | Arduino Connection |
|---|---|
| Left (+Vs) | 5V |
| Middle (Vout) | A0 |
| Right (GND) | GND |

### LED

| LED Connection | Arduino Connection |
|---|---|
| Anode (long leg) | D13 through a 220Ω resistor |
| Cathode (short leg) | GND |

### Piezo Buzzer

| Buzzer Terminal | Arduino Connection |
|---|---|
| Positive (+) | D8 |
| Negative (-) | GND |

All components share the Arduino's common ground.

## 5. Working Principle

The TMP36 measures the surrounding temperature and produces an analog voltage corresponding to the measured temperature.

The Arduino reads this voltage through analog pin A0.

The analog reading is converted into voltage using the Arduino's 10-bit ADC:

`voltage = sensorValue × (5.0 / 1023.0)`

The TMP36 has an approximate output offset of 0.5V at 0°C and a sensitivity of 10mV per degree Celsius.

The temperature is calculated using:

`temperatureC = (voltage - 0.5) × 100`

The Arduino compares the calculated temperature with the programmed threshold of 30°C.

- At 30°C or above: the LED turns ON and the piezo buzzer sounds.
- Below 30°C: the LED turns OFF and the buzzer becomes silent.

The temperature is also displayed in the Serial Monitor at a baud rate of 9600.

## 6. Program Logic

The program uses:
- `analogRead()` to obtain the sensor reading.
- ADC conversion to calculate the sensor voltage.
- The TMP36 conversion formula to calculate temperature.
- An `if-else` conditional statement to control the alerts.
- `digitalWrite()` to control the LED.
- `tone()` and `noTone()` to activate and deactivate the buzzer.
- `Serial.print()` to display temperature readings.

## 7. Testing and Results

The system was tested by adjusting the TMP36 temperature setting in Tinkercad.

| Test Temperature | LED | Piezo Buzzer |
|---|---|---|
| 29°C | OFF | Silent |
| 39–41°C | ON | Sounding |

The observed results matched the expected behaviour of the programmed temperature alert system.

## 8. Skills and Concepts Practised

- Arduino programming with C/C++.
- Analog sensor interfacing.
- Analog-to-digital conversion.
- Temperature measurement.
- Sensor calibration principles and conversion.
- Conditional logic.
- Digital output control.
- Serial communication and monitoring.
- Circuit wiring and simulation.
- Basic troubleshooting and testing.

## 9. Conclusion

This project demonstrates how an Arduino can interface with an analog temperature sensor and use the measured values to control visual and audible outputs.

It provides practical experience with sensor interfacing, analog input processing, conditional programming and automated alert systems.

## 10. Project Files

- `temperature_alert.ino` – Arduino source code.
- `circuit.png` – Screenshot of the completed Tinkercad circuit.
- `README.md` – Project documentation.
