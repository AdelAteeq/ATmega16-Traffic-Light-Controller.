# ATmega16 Traffic Light Controller

AVR C traffic light simulation developed for COE 332 at Qassim University.

**Student:** Adel Abdulaziz Ibrahim Bin Ateeq  
**Student ID:** 421108048  
**Instructor:** Dr. Ebrahim Ramadan

## Hardware and timing

- Microcontroller: ATmega16, clock 16 MHz
- PB0: Red LED — 10 seconds
- PB1: Yellow LED — 3 seconds
- PB2: Green LED — 10 seconds
- Sequence repeats continuously

## Source code

The AVR C implementation is in [studio/Traffic Lights/main.c](studio/Traffic%20Lights/main.c). It drives the three LEDs on PORTB using timed delays.

## Original project and documentation

The local project package contains the Atmel Studio solution, Proteus project, simulation screenshots and PDF report. These supporting binary/project files still need to be uploaded to this repository.

**Verification:** The original Proteus file has not been independently verified for connections, so rebuild in Atmel Studio and test the generated HEX in Proteus before treating it as validated.
