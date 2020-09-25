all: MathFunction MultiVarMathFunction

MathFunction: A4p2.cpp
	 							 g++ A4p2.cpp -o MathFunction

MultiVarMathFunction: A4p3.cpp
												 g++ A4p3.cpp -o MultiVarMathFunction
