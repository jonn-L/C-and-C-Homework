/*
CH-230-A
a12 p4.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
	//Create two fractions
	Fraction a;
	Fraction b;

	//Ask user to input them
	cin >> a;
	cin >> b;

	//Print out the fractions
	cout << "Fraction a: " << a;
	cout << "Fraction b: " << b;

	//Display the result of the calculations
	cout << "a*b = " << a*b;
	cout << "a/b = " << a/b;

    return 0;
}