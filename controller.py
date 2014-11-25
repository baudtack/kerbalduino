import serial
import uinput

device = uinput.Device([
        uinput.KEY_SPACE
        ])

while 1:
    ser = serial.Serial('/dev/ttyACM1', 9600)
    x = ser.readline().strip()
    print x
    if x == 'STAGE':
        device.emit_click(uinput.KEY_SPACE)
ser.close()
