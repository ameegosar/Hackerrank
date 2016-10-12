#include<iostream>
#include "Fraction.h"

Fraction::Fraction()
	{
	numerator =1;
	denominator=1;
	}
Fraction:: Fraction(int newnumerator, int newdenominator){
	if(newdenominator == 0)
	cout<<"Invalid fraction";
//	break;
	else{
	numerator = newnumerator;
	denominator = newdenominator;
	}
	}
Fraction Fraction:: Reciprocal(){
	int n=numerator;
	int d = denominator;
	Fraction f(d,n);
	return(f);
	}
void Fraction :: Output()
	{
	cout<<"Fraction is:"<<numerator<<"/"<<denominator<<endl;
	}
