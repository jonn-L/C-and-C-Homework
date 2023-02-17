/*
CH-230-A
a13 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
using namespace std;

#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex {
    private:
        int realPart;
        int imaginaryPart;
    public:
        //Intializing constructors
        Complex();
        Complex(int, int);

        //Copying constructor
        Complex(const Complex&);

        //Decstructor
        ~Complex();

        //Setter methods
        void setReal(int newReal);
        void setImaginary(int newImaginary);

        //Getter methods
        int getReal();
        int getImaginary();

        //Friend functions to overload << and >>
        friend ostream& operator<<(ostream &output, const Complex &c);
        friend istream& operator>>(istream &input, Complex &c);
        
        //Method to overload =
        Complex& operator=(Complex &copy);

        //Conjugation method
        void conjugate();

        //Methods to overload +, - and *
        Complex operator+(const Complex &c2);
        Complex operator-(const Complex &c2);
        Complex operator*(const Complex &c2);

};

#endif