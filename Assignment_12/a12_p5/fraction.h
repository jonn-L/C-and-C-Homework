/*
CH-230-A
a12 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<string>
#include<cstring>
using namespace std;

#ifndef _FRACTION_H
#define _FRACTION_H

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
								
	//Declare the friend functions for the operators
	friend ostream& operator<<(ostream &output, const Fraction &frac);	
    Fraction operator*(const Fraction &frac2);
	Fraction operator/(const Fraction &frac2);
	friend istream& operator>>(istream &input, Fraction &frac);
	Fraction operator+(const Fraction &frac2);
	Fraction operator-(const Fraction &frac2);
	Fraction& operator=(const Fraction &frac);
	bool operator>(const Fraction &frac2);
	bool operator<(const Fraction &frac2);

};

#endif