/*
CH-230-A
a10 p8.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>

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

        //Print complex number method
        void printComplex();

        //Conjugation method
        void conjugate();

        //Sum method
        Complex add(Complex);

        //Difference method
        Complex subract(Complex);

        //Multiplication method
        Complex multiply(Complex);
};