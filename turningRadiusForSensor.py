from SGenerator import *

print "Setup Program - SteerSense\n\n"

print  "Please enter the following data: "

M = float(raw_input("Kingpin-Kingpin Distance 2M: "))
StoTRatio = float(raw_input("Ratio of S to T: "))
theta = float(raw_input("(degrees) Static Angle of RockerArm theta: "))
psi = theta
m = float(raw_input("Steering Knuckle Length (Left)"))
n = float(raw_input("Steering Knuckle Length (Right)"))
WB = float(raw_input("Wheel Base WB: "))
TRF = float(raw_input("Front tread TRF: "))
L = float(raw_input("Rack Length 2L: "))
l1 = float(raw_input("Front-Wheel to First Sensor: l1: "))
l2 = float(raw_input("Back-Wheel to Last Sensor: l2: "))


x = ValueStream(StoTRatio, theta, psi, m, n, WB)
print x


'''
K = raw_input("Tie Rod Length K: ")
J = raw_input("Rocker Arm Length J: ")
H = raw_input("Kingpin-Rack Distance H: ")
'''
