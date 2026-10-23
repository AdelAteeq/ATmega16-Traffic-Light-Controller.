# ATmega16 Traffic Light Controller

A simple three-stage traffic-light controller programmed in AVR C using Atmel Studio and simulated with Proteus.

**Author:** Adel Abdulaziz Ibrahim Bin Ateeq  
**Student ID:** 421108048  
**Course:** COE 332 — Qassim University  
**Instructor:** Dr. Ebrahim Ramadan

## Operation

| Signal | ATmega16 pin | Duration |
| --- | --- | --- |
| Red | PB0 | 10 seconds |
| Yellow | PB1 | 3 seconds |
| Green | PB2 | 10 seconds |

The program sets PB0–PB2 as outputs and cycles continuously through the three lights. The source assumes a **16 MHz** CPU clock.

## Repository layout

```text
.
├── README.md
├── .gitignore
├── firmware/
│   ├── Traffic Lights.atsln
│   └── Traffic Lights/
│       ├── Traffic Lights.cproj
│       ├── Traffic Lights.componentinfo.xml
│       └── main.c
├── simulation/
│   └── Traffic_Lights.pdsprj
├── docs/
│   └── Traffic_Light_Project_Adel_Final.pdf
└── archive/
    └── Traffic_Lights_Source.zip
```

## Build and simulation

1. Open `firmware/Traffic Lights.atsln` in Atmel Studio.
2. Build the project targeting **ATmega16**.
3. Open `simulation/Traffic_Lights.pdsprj` in Proteus.
4. Check that the actual Proteus microcontroller, PB0/PB1/PB2 wiring, clock setting (16 MHz), and compiled HEX all match before running the simulation.

## Notes

The PDF report includes project documentation and simulation screenshots. The archived ZIP preserves the earlier submitted source package.

**Verification status:** Source and Atmel Studio project configuration have been aligned to ATmega16 and PORTB. The Proteus project wiring and a successful end-to-end build/simulation have **not** been independently verified. Do not assume the bundled Proteus design matches the modified firmware without checking it.
