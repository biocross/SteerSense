import RPi.GPIO as b
import time

b.setmode(b.BCM)

#SENSORS:
BLUE = 0
RED = 1
#PIN - GPIO17 - Red Sensor - (trigger + echo)
redSensor = 17
#PIN - GPIO27 - Blue Sensor - (trigger)
blueTrigger = 25
#PIN - GPIO22 - Blue Sensor - (Echo) 
blueEcho = 22

# LEDs:
#PIN = GPIO23 - White LED
whiteLed = 23
#PIN = GPIO24 - Green LED
greenLed = 24


def reading(sensor):
	if(sensor == 0):
		b.setup(blueTrigger, b.OUT)
		b.setup(blueEcho, b.IN)
		b.output(blueTrigger, b.LOW)
		time.sleep(0.1)
		b.output(blueTrigger, True)
		time.sleep(0.00001)
		b.output(blueTrigger, False)

		while b.input(blueEcho) == 0:
			signaloff = time.time()
		while b.input(blueEcho) == 1:
			signalon = time.time()

		timepassed = signalon - signaloff
		distance = timepassed*17000

		return distance
	if(sensor == 1):
		b.setup(redSensor, b.OUT)
		b.output(redSensor, b.LOW)
		time.sleep(0.1)
		b.output(redSensor, True)
		time.sleep(0.00001)
		b.output(redSensor, False)
		b.setup(redSensor, b.IN)
		while b.input(redSensor) == 0:
			signaloff = time.time()
		while b.input(redSensor) == 1:
			signalon = time.time()

		timepassed = signalon - signaloff
		distance = timepassed*17000

		return distance

b.setup(whiteLed, b.OUT)
b.setup(greenLed, b.OUT)

while(1):
	redDistance = reading(RED)
	blueDistance = reading(BLUE)

	print "RED: " + redDistance + "  BLUE: " + blueDistance  

	if(redDistance < blueDistance):
		b.output(whiteLed, True)
		b.output(greenLed, False)
	else:
		b.output(greenLed, True)
		b.output(whiteLed, False)