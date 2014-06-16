from SGenerator import *

print "Setup Program - SteerSense\n\n"
2
print  "Please enter the following data: "
'''
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
a = raw_input("Angle between Tie-rod and Wheel: ")
'''

M = 1
StoTRatio = 0.009259
theta = 1
psi = theta
m = 3.33
n = 3.33
WB = 1
TRF = 1
L = 42.76
l1 = 1
l2 = 1
a = 24.557



x = ValueStream(StoTRatio, theta, psi, m, n, WB, a)
print x
'''
R1[]
R2[]
R3[]
R4[]
R5[]
R6[]
for j in range(1,360):
	temp = x[j] + (TRF/2)
	temp = temp * temp
	temp2 = WB + l1
	temp2 = temp2 * temp2
	R1[i] = sqrt(temp + temp2)
	temp2 = WB/2
	temp2 = temp2 * temp2
	R2[i] = sqrt(temp2 + temp)
	temp2 = l2 * l2
	R3[i] = sqrt(temp + temp2)
	temp = x[i] - (TRF/2)
	temp = temp * temp
	temp2 = WB + l1
	temp2 = temp2 * temp2
	R4[i] = sqrt(temp + temp2)
	temp2 = WB/2
	temp2 = temp2 * temp2
	R5[i] = sqrt(temp2 + temp)
	temp2 = l2 * l2
	R6[i] = sqrt(temp + temp2)


'''

'''
K = raw_input("Tie Rod Length K: ")
J = raw_input("Rocker Arm Length J: ")
H = raw_input("Kingpin-Rack Distance H: ")
'''
