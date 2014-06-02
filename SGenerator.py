from mathFunctions import *

def Sn(StoRatio):
	Sn = []
	for j in range(1, 360, 1):
		s = StoRatio * j #s is wheel linear transaltion (rack transaltion)
		Sn.append(s)


	print "Here is Sn"
	print Sn
	return Sn

def AlphaBetaGenerator(S, m, n, theta, psi):
	alpha = []
	beta = []
	for j in range(1, 360, 1):
		print "Sending for alpha: " + str(S[j-1]/m)
		alphaCurrent = psi - sinInverse(S[j-1]/m)
		print "=======================got alpha: " + str(alphaCurrent)
		print "Sending for beta: " + str(S[j-1]/n)
		betaCurrent = theta - sinInverse(S[j-1]/n)
		alpha.append(alphaCurrent)
		beta.append(betaCurrent)

	final = []
	final.append(alpha)
	final.append(beta)
	print "Here is AlphaBeta"
	print final
	return final

def RcGenerator(Sn, alpha, beta, wheelBase):
	Rc = []
	for j in range(1, 360, 1):
		RcCurrent = ((wheelBase/2) * ( (1/tan(beta[j-1])) + (1/tan(alpha[j-1])) ))
		Rc.append(RcCurrent)


	return Rc



def ValueStream(StoRatio, theta, psi, m, n, wheelBase):
	SnValues = Sn(StoRatio)
	AlphaBetaValues = AlphaBetaGenerator(SnValues, m, n, theta, psi)
	RcValues = RcGenerator(SnValues, AlphaBetaValues[0], AlphaBetaValues[1], wheelBase)

	print RcValues
	return RcValues




#Rc < alphaN, BetaN < Sn < n(0, 360)