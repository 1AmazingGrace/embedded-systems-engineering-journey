# Project 01: Pushbutton-Controlled LED

## 1. Project Overview

This project demonstrates how an Arduino Uno reads a digital input from a pushbutton and uses that input to control an LED.

When the button is pressed, the LED turns ON. When the button is released, the LED turns OFF.

## 2. Project Objective

To understand how a microcontroller receives input signals, processes them using conditional statements, and controls an output device.

## 3. Components Used

- Arduino Uno R3
- Pushbutton (momentary switch)
- Red LED
- 220Ω resistor
- Jumper wires

## 4. Circuit Connections

### LED
- Arduino D13 → 220Ω resistor
- Other resistor leg → LED anode (long leg)
- LED cathode (short leg) → GND

### Pushbutton
- One electrical side → Arduino D2
- Opposite electrical side → Arduino GND

The pushbutton uses the Arduino's internal pull-up resistor through `INPUT_PULLUP`.

## 5. Working Principle

The Arduino continuously reads the pushbutton state.

With `INPUT_PULLUP`:
- Button released: HIGH
- Button pressed: LOW

The program checks the button state and controls the LED accordingly.

## 6. Expected Behaviour

| Button state | LED state |
|---|---|
| Released | OFF |
| Pressed | ON |

## 7. Concepts Practised

- Digital input and output
- Arduino pin configuration
- `INPUT_PULLUP`
- `digitalRead()`
- `digitalWrite()`
- `if/else` conditional statements
- Basic circuit connections

## 8. Testing

The circuit was tested in Tinkercad.

**Result:** The LED turned ON when the pushbutton was pressed and OFF when released.

## 9. Conclusion

This project demonstrates basic input-to-output control using an Arduino microcontroller. It provides a foundation for building sensor-based monitoring and automation systems.
