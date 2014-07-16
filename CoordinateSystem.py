from math import *
sensor1 = [(-TR/2), (WB + L1)]
sensor2 = [(-TR/2), (WB/2)]
sensor3 = [(-TR/2), (-L2)]
sensor4 = [(TR/2), (-L2)]
sensor5 = [(TR/2), (WB/2)]
sensor6 = [(TR/2), (WB + L1)]

origin = [0, 0]



class Sensor(x, y,typeOfTurn):

	__init__:
		self.x = x
		self.y = y
		self.typeOfTurn = 0
		#0 left
		#1 right

	def coordinates():
		return [self.x, self.y]

	def distanceToObject():
		return [(self.x + objectDistance), self.y]


def checker(Sensor a):
	
	objectToCheck = a.distanceToObject()#here we calculate the object co ordinates w.r.t to sensor 6
	R6
	R5
	R4
	temp1 = (objectToCheck[0]-RC)*((objectToCheck[0]-RC)) + (objectToCheck[1]*objectToCheck[1])
	temp2 = temp1 - sq(R6)
	temp3 = temp1 - sq(R5)
	temp4 = temp1 - sq(R4)
	if(temp1<=0 and temp3>0):
		print "object between sensor6 and sensor5"
	elif (temp1<=0 and temp4>0)
		print "object between sensor6 and sensor4"
	


def sq(x):
	return x*x




