/*
CH-230-A
a13 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"

using namespace std;

//Defining initialzing constructors
Complex::Complex() {
    realPart = 0;
    imaginaryPart = 0;
}
Complex::Complex(int newReal, int newImaginary) {
    realPart = newReal;
    imaginaryPart = newImaginary;
}

//Defning copy constructor
Complex::Complex(const Complex &complexNum) {
    realPart = complexNum.realPart;
    imaginaryPart = complexNum.imaginaryPart;
}

//Defined destructor
Complex::~Complex() {
    cout << "calling destructor" << endl;
}

//Defined setter methods
void Complex::setReal(int newReal) {
    realPart = newReal;
}
void Complex::setImaginary(int newImaginary) {
    imaginaryPart = newImaginary;
}

//Defined getter methods
int Complex::getReal() {
    return realPart;
}
int Complex::getImaginary() {
    return imaginaryPart;
}

//Implementing the overloaded <<
ostream &operator<<(ostream &output, const Complex &c) {
    if (c.imaginaryPart) {
		output << 
            noshowpos << c.realPart << showpos << c.imaginaryPart << "i" 
        << endl;
	} else {
		output << 
            noshowpos << c.realPart << showpos 
        << endl;
	}

    return output;
}

//Implementing the overloaded >>
istream &operator>>(istream &input, Complex &c) {
    input >> c.realPart >> c.imaginaryPart;

    return input;
}

//Implementing the overloaded =
Complex &Complex::operator=(Complex &copy) {
    this->realPart = copy.realPart;
    this->imaginaryPart = copy.imaginaryPart;

    return *this;
}

//Defined conjgugation method
void Complex::conjugate() {
    imaginaryPart = imaginaryPart * (-1);
}

//Implementing the overloaded +
Complex Complex::operator+(const Complex &c2) {
    Complex result;

   result.realPart = this->realPart + c2.realPart;
   result.imaginaryPart = this->imaginaryPart + c2.imaginaryPart;

   return result;
}

//Implementing the overloaded -
Complex Complex::operator-(const Complex &c2) {
    Complex result;

   result.realPart = this->realPart - c2.realPart;
   result.imaginaryPart = this->imaginaryPart - c2.imaginaryPart;

   return result;
}

//Implementing the overloaded *
Complex Complex::operator*(const Complex &c2) {
    Complex result;

    result.realPart = 
        realPart * c2.realPart - this->imaginaryPart * c2.imaginaryPart;
    result.imaginaryPart = 
        imaginaryPart * c2.realPart + this->realPart * c2.imaginaryPart;

    return result;
}
