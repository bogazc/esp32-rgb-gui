# ESP32 RGB LED Controller with Python GUI

This simple and small project demonstrates how to control an RGB LED connected to an ESP32 using a Python GUI.

# Components Used

- ESP32
- Breadboard
- RGB LED
- 3 x 220 Ω resistors
- 4 x jumper wires (male-female)

# Connection on ESP32

<img width="1171" height="447" alt="connection" src="https://github.com/user-attachments/assets/cd962de0-cef4-41d6-b6d8-846137c8a9fe" />


# Configuration

## Monitor Speed

If you are using PlatformIO, make sure to set the <b>serial monitor speed</b> to match your ESP32 code:

1. Open the `platformio.ini` file.
2. Add the line:

```c++
monitor_speed = 921600
```

## COM Port Setup

Check your ESP32 COM Port before running the GUI.

How to check it:

1. Open <b>Device Manager</b>.
2. Expand the <b>Ports (COM & LPT)</b> section.
3. Look for a device like <b>"Silicon Labs ..."</b>.
4. Note the **COMx** number.

Then, set the COM port in the `gui.py` code:

```python
import serial

esp32 = serial.Serial('COMx', 921600)
```
Now with this configuration, project should work correctly.
