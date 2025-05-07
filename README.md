# ☕ Coffee Maker Selection - ARM Assembly (FRDM-KL25Z)

This project demonstrates a simple simulation of a coffee-making logic system written using inline ARM Assembly on the NXP KL25Z microcontroller.

## 🧾 Description

The program receives 5 inputs representing different coffee preferences:
- Coffee type (Nescafe, Frappe, French, Espresso)
- Sugar level (Sketos, Metrios, Glykos)
- Milk (Yes or No)
- Cinnamon (Yes or No)
- Stirring (Yes or No)

It uses ARM assembly to determine the configuration and stores the output in internal registers.

## 🛠️ Technologies

- ARM Cortex-M0+ Assembly (Inline with C)
- FRDM-KL25Z Development Board
- CMSIS (Cortex Microcontroller Software Interface Standard)

## 📥 Inputs

| Variable | Meaning               | Values         |
|----------|------------------------|----------------|
| `a`      | Coffee Type            | 0: Nescafe, 1: Frappe, 2: French, 3: Espresso |
| `b`      | Sugar Level            | 1: Sketos, 2: Metrios, 3: Glykos |
| `c`      | Milk                   | 0: No, 1: Yes |
| `d`      | Cinnamon               | 0: No, 1: Yes |
| `e`      | Stirring (Anadeusi)    | 0: No, 1: Yes |

## ⚙️ Output

Outputs are written to general-purpose registers:
- `r5` — Coffee type result
- `r6` — Sugar level result
- `r7` — Milk result
- `r0` — Cinnamon result
- `r1` — Stirring result

(Use a debugger or memory watch to verify results.)

## 🚀 Build & Run

To compile and upload:
1. Open the project in Keil MDK or MCUXpresso IDE.
2. Build and flash the project to the FRDM-KL25Z board.
3. Use a debugger or UART to inspect the register values if needed.

## 📝 Notes

- This project is designed for educational purposes to demonstrate decision-making in ARM assembly.
- Ensure CMSIS and MKL25Z4 startup files are included in your project.
