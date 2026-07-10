# 🐭 Autonomous Blue Pill STM32 Differential Drive Micromouse

Welcome to the engineering repository for our autonomous, maze-solving Micromouse robot. This project features a highly optimized, compact two-wheel differential drive vehicle controlled by an **STM32 Blue Pill (STM32F103C8T6)** microcontroller and programmed natively from scratch in **C/C++**.

The core architecture combines structural mechanical distribution, cascading feedback loops, and advanced graph-traversal logic to solve any arbitrary $16 \times 16$ grid maze.

---

## 🧭 System Blueprint & Architecture

```text
                  ┌──► [ LM2596 Buck Module ] ──► 5V / 3.3V Logic ──► Blue Pill MCU & IR Array
                  │
[ 7.4V LiPo ] ────┤
                  │
                  └──► [ TB6612FNG Driver Pin ] ────────────────────► Coreless DC Motors (Raw 7.4V)
