# this has our math functions
import math

def tan(angleInDegrees):
	return math.tan((math.radians(angleInDegrees)))

def sinInverse(angleInRadians):
	return math.degrees(math.asin(angleInRadians))
