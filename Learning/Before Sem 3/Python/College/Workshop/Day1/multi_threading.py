import threading 
import time

def printHello():
	for i in range (10):
		print("Hello")
def greet():
	for i in range (10):
		print("GM")

t1 = threading.Thread(target =  printHello)
t2 = threading.Thread(target = greet)

t1.start()
t2.start() 
