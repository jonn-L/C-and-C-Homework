/*
CH-230-A
a10 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;

    //Declared variables for eye color and age
    double weight;
    int age;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

    //Ask for input of weight
    cout << "Weight in kg: ";
    cin >> weight;
    c.setWeight(weight);

    //Ask for input of age
    cout << "Age: ";
    cin >> age;
    c.setAge(age);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}