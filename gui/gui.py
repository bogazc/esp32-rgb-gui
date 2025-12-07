import tkinter as tk
import serial
import time

esp32 = serial.Serial('COM5', 921600)
time.sleep(2)

window = tk.Tk()
window.geometry("350x620")
window.title("Choose colors")
window['background'] = '#b0f2ce'

def red():
    print("Red")
    esp32.write(b'r')
def green():
    print("Green")
    esp32.write(b'g')
def blue():
    print("Blue")
    esp32.write(b'b')
def yellow():
    print("Yellow")
    esp32.write(b'y')
def magenta():
    print("Magenta")
    esp32.write(b'm')
def cyan():
    print("Cyan")
    esp32.write(b'c')
def white():
    print("White")
    esp32.write(b'w')
def black():
    print("Black")
    esp32.write(b'k')
def quit():
    print("PROGRAM STOPPED")
    esp32.write(b'q')
    esp32.close()
    window.destroy()
    

text = tk.Label(window, text = "Choose your color!", font = ('Arial', 20), background = '#b0f2ce')
text.pack(padx = 20, pady = 20)

tk.Button(window, width = 10, text = "RED", command = red,  font = ('Arial', 17), background = 'red').pack(pady = 5)

tk.Button(window, width = 10, text = "GREEN", command = green, font = ('Arial', 17), background = 'green').pack(pady = 5)

tk.Button(window, width = 10, text = "BLUE", command = blue, font = ('Arial', 17), background = 'blue').pack(pady = 5)

tk.Button(window, width = 10, text = "YELLOW", command = yellow, font = ('Arial', 17), background = 'yellow').pack(pady = 5)

tk.Button(window, width = 10, text = "MAGENTA", command = magenta, font = ('Arial', 17), background = 'magenta').pack(pady = 5)

tk.Button(window, width = 10, text = "CYAN", command = cyan, font = ('Arial', 17), background = 'cyan').pack(pady = 5)

tk.Button(window, width = 10, text = "WHITE", command = white, font = ('Arial', 17), background = 'white', fg = 'black').pack(pady = 5)

tk.Button(window, width = 10, text = "BLACK", command = black, font = ('Arial', 17), background = 'black', fg = 'white').pack(pady = 5)

tk.Button(window, width = 10, text = "QUIT", command = quit, font = ('Arial', 17), background = '#ff4d4d').pack(pady = 20)

window.mainloop()