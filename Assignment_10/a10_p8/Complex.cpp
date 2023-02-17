/*
CH-230-A
a10 p8.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
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

//Defined print method
void Complex::printComplex() {
    if (imaginaryPart) {
		cout << 
            noshowpos << realPart << showpos << imaginaryPart << "i" 
        << endl;
	} else {
		cout << 
            noshowpos << realPart << showpos 
        << endl;
	}
}

//Defined conjgugation method
void Complex::conjugate() {
    imaginaryPart = imaginaryPart * (-1);
}

//Defined sum method
Complex Complex::add(Complex c2) {
   Complex result;

   result.realPart = realPart + c2.realPart;
   result.imaginaryPart = imaginaryPart + c2.imaginaryPart;

   return result;
}

//Defined difference method
Complex Complex::subract(Complex c2) {
    Complex result;

    result.realPart = c2.realPart - realPart;
    result.imaginaryPart = c2.imaginaryPart - imaginaryPart;

    return result;
}

//Defined multiplication method
Complex Complex::multiply(Complex c2) {
    Complex result;

    result.realPart = 
        realPart * c2.realPart - imaginaryPart * c2.imaginaryPart;
    result.imaginaryPart = 
        imaginaryPart * c2.realPart + realPart * c2.imaginaryPart;

    return result;
}

