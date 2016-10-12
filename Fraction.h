#ifndef FRACTION_H
#define FRACTION_H


#include<iostream>

using namespace std;

class Fraction {
public:
	Fraction();
	Fraction (int num, int denom);
	void Output();
	Fraction Reciprocal();
	
private:
	int numerator;
	int denominator;
};

#endif
