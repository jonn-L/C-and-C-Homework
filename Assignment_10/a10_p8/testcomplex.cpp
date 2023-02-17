/*
CH-230-A
a10 p8.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include "Complex.h"

using namespace std;

int main() {
    //Declare values and ask for input
    int c1RealPart, c1ImagPart;
    int c2RealPart, c2ImagPart;
    cout << "Enter the values for first complex number" << endl;
    cin >> c1RealPart;
    cin >> c1ImagPart;
    cout << "Enter the values for second complex number" << endl;
    cin >> c2RealPart;
    cin >> c2ImagPart;

    //Create complex numbers with those values and print them out
    Complex c1(c1RealPart, c1ImagPart);
    Complex c2(c2RealPart, c2ImagPart);
    cout << "c1:" << endl;
    c1.printComplex();
    cout << "c2:" << endl;
    c2.printComplex();

    //Find the conjugate of c1 and print it out
    cout << "This is the conjguate of c1" << endl;
    c1.conjugate();
    c1.printComplex();

    //Find c1 + c2 and print it out
    cout << "This is c1 + c2" << endl;
    Complex c3 = c1.add(c2);
    c3.printComplex();

    //Find c2 - c1 and print it out
    cout << "This is c2 - c1" << endl;
    Complex c4 = c1.subract(c2);
    c4.printComplex();

    //Find c1 * c2 and print it out
    cout << "This is c1 * c2" << endl;
    Complex c5 = c1.multiply(c2);
    c5.printComplex();

    return 0;
}