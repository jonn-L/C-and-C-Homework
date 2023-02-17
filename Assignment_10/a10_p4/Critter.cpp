/*
CH-230-A
a10 p4.cpp
Jon Lumi
jlumi@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << 
    "I am " << name << ". My hunger level is " << hunger << ". " <<
	"My boredom level is " << boredom << ". My height is " << height
    << endl;
}

int Critter::getHunger() {
	return hunger;
}

// Constructor for case 1
Critter::Critter(){
	//Set name to default_critter and the other values as told 
	name = "default_critter";
	hunger = boredom = 0;
	height = 5;

	cout << "You used constructor 1" << endl;
}

// Constructor for case 2
Critter::Critter(string newname){
	//Set the values of the cirtter as told
	name = newname;
	hunger = boredom = 0;
	height = 5;

	cout << "You used constructor 2" << endl;
}

//Constructor for case 3
Critter::Critter(string newname, int newhunger, int newboredom, 
				 double newheight){
	//Set the values of critter accordingly
	name = newname;
	hunger = newhunger;
	boredom  = newboredom;
	height = newheight;

	cout << "You used constructor 3" << endl;
}