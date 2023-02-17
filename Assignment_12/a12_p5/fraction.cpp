/*
CH-230-A
a12 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;

//Default constructor
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

//Parmeter constructor
Fraction::Fraction(int n, int d) {
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

//Function to find the GCD
int Fraction::gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

//Function to find the LCM
int Fraction::lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}

//Friend function to overload operator <<
ostream& operator<<(ostream &output, const Fraction &frac) {
    output << frac.num << '/' << frac.den << endl;

    return output;
}

//Overloading operator *
Fraction Fraction::operator*(const Fraction &frac2) {
	Fraction result;
	result.num = this->num * frac2.num;
	result.den = this->den * frac2.den;

	return result;
}

//Overloading operator /
Fraction Fraction::operator/(const Fraction &frac2) {
	Fraction result;
	result.num = this->num * frac2.den;
	result.den = this->den * frac2.num;

	return result;
}

//Friend function to overload operator >>
istream& operator>>(istream &input, Fraction &frac) {
	input >> frac.num >> frac.den;

	return input;
}

//Overloading the + operator
Fraction Fraction::operator+(const Fraction &frac2) {
	Fraction result;
	result.den = lcm(this->den, frac2.den);
	result.num = (num*result.den/this->den) 
			   + (frac2.num*result.den/frac2.den);

	return result;
}

//Overloading the - operator
Fraction Fraction::operator-(const Fraction &frac2) {
	Fraction result;
	result.den = lcm(this->den, frac2.den);
	result.num = (num*result.den/this->den) 
			   - (frac2.num*result.den/frac2.den);

	return result;
}

//Overloading = operator
Fraction& Fraction::operator=(const Fraction &frac) {
	den = frac.den;
	num = frac.num;

	return *this;
}

//Overloading >
bool Fraction::operator>(const Fraction &frac2) {
	int comperator = this->num*frac2.den - this->den*frac2.num;
	
	return (comperator > 0) ? true : false;
}

//Overloading <
bool Fraction::operator<(const Fraction &frac2) {
	int comperator = this->num*frac2.den - this->den*frac2.num;

	return (comperator < 0) ? true : false;
}

