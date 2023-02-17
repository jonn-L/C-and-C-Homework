/*
CH-230-A
a12 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
	//Delcare fractions
	Fraction a;
	Fraction b;

	//Ask user to input them
	cin >> a;
	cin >> b;

	//Print them out
	cout << "Fraction a: " << a;
	cout << "Fraction b: " << b;

	//Test * and /
	cout << "a*b = " << a*b;
	cout << "a/b = " << a/b;

	//Test + and -
	cout << "a+b = " << a+b;
	cout << "a-b = " << a-b;

	//Test > and <
	cout << "is a > b? ";
	(a > b) ? cout << "Yes" : cout << "No";
	cout << endl;

	cout << "is a < b? ";
	(a < b) ? cout << "Yes" : cout << "No";
	cout << endl;

    return 0;
}