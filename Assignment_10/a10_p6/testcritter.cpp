/*
CH-230-A
a10 p6.cpp
Jon Lumi
jlumi@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	//Declare critter to ilustrate the first constructor
	Critter a;
	a.setHunger(2);
	cout << "You have created:" << endl;
	a.print();

	//Declare critter to ilustrate the second constructor
	string nameB = "critterB";
	Critter b(nameB);
	b.setHunger(2);
	cout << "You have created:" << endl;
	b.print();

	//Declare critter to ilustrate the third constructor where we set the
	//value for the height 
	string nameC1 = "critterC1";
	Critter c1(nameC1, 2, 0, 0);
	cout << "You have created:" << endl;
	c1.print();

	//Declare critter to ilustrate the third constructor where we dont set
	//the value for the height but instead use the default value
	string nameC2 = "critterC2";
	Critter c2(nameC2, 2, 2);
	cout << "You have created:" << endl;
	c2.print();

	//Add example to illsustrate use of constructor 4 which takes 5 parameters
	string nameD = "critterD";
	Critter d(nameD, 2, 2, 2, 2);
	cout << "You have created:" << endl;
	d.print();
	return 0;
}