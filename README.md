# Arduino Reaction Time Game

This project is a simple Arduino-based reaction time game that I developed while learning Arduino and embedded systems.

The system waits for a random amount of time before turning on an LED. As soon as the LED lights up, the player has to press the push button as quickly as possible. The Arduino measures the reaction time in milliseconds and displays the result in the Serial Monitor.

## Components

- Arduino Uno
- LED
- Push button
- Resistor
- Breadboard
- Jumper wires

## How It Works

1. The LED is initially turned off.
2. The Arduino waits for a random time between 2 and 7 seconds.
3. The LED turns on and the timer starts using `millis()`.
4. The player presses the push button as quickly as possible.
5. The Arduino calculates the reaction time.
6. The measured reaction time is displayed in the Serial Monitor.
7. The result is classified according to the player's reaction time.

## Reaction Time Classification

- Less than 500 ms: **Excellent**
- 500–999 ms: **Good**
- 1000 ms or more: **Too Slow**

## Concepts Used

- Digital input and output
- `INPUT_PULLUP`
- Push-button input
- Random delay using `random()`
- Time measurement using `millis()`
- Conditional statements
- Serial communication

## Demo

A short demonstration video shows the circuit and the reaction time game running on the Arduino Uno.



https://github.com/user-attachments/assets/31102113-da59-4795-8f9c-fb9cb997a8e8




## What I Learned

Through this project, I practiced working with digital inputs and outputs, measuring elapsed time with `millis()`, using random delays, reading a push button and displaying results through the Serial Monitor.
