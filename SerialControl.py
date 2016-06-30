import serial as serial
import Tkinter as master
from Tkinter import*
import time

X = True
forward = True #defaults
backward = False
ser = serial.Serial('/dev/ttyS0')
master = Tk ()


def userselect1():
	backward = False
	forward = True
	
def userselect2():
	forward = False
	backward = True
	
def forward():
	ser.close # Makes sure that the serial port is closed
	print("Forward")
	ser = serial.Serial('/dev/tty0')
	print(ser.name) # for debuging
	ser.write(b'hello motor') #this message doesnt matter its just a signal
	ser.close()
	
def backward():
	ser.close
	print("Backward")

def logic():
	if forward == True:
		forward()
	else:
		backward()

		
b = Button(master, text="Forward", command=userselect1)
b.pack()

p = Button(master, text="Backward", command=userselect2)
p.pack()

mainloop()
while X == True:
	logic()
