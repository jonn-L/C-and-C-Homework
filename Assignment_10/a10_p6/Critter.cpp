/*
CH-230-A
a10 p6.cpp
Jon Lumi
jlumi@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

//We divide the inputed hunger by 10.0 to store it as a double internally
void Critter::setHunger(int newhunger) {
	hunger = newhunger/10.0;
}

void Critter::setThirst(double newthirst) {
	thirst = newthirst;
}

void Critter::print() {
	//When printing the values, we use the getHunger method so that
	//the hunger appears as an integer
	cout << 
    "I am " << name << ". My hunger level is " << getHunger() << ". " <<
	"My boredom level is " << boredom << ". My height is " << height <<
	". My thirst level is " << getThirst()
    << endl;
}

//We return hunger * 10 to make it appear as if we're storing it's value
//as an integer
int Critter::getHunger() {
	return hunger*10;
}
int Critter::getThirst() {
	return thirst;
}

Critter::Critter(){
	name = "default_critter";
	hunger = boredom = 0;
	height = 5;

	cout << "You used constructor 1" << endl;
}

Critter::Critter(string newname){
	name = newname;
	hunger = boredom = thirst = 0;
	height = 5;

	cout << "You used constructor 2" << endl;
}

Critter::Critter(string newname, int newhunger, int newboredom, 
				 double newheight){
	name = newname;
	//Here we make a change so that the set hunger is stored as a percentage
	setHunger(newhunger);
	thirst = newhunger;
	boredom  = newboredom;
	height = newheight;

	cout << "You used constructor 3" << endl;
}

Critter::Critter(string newname, int newhunger, int newboredom, 
				 double newheight, double newthirst){
	name = newname;
	//Here we make a change so that the set hunger is stored as a percentage
	hunger = newhunger/10.0;
	boredom  = newboredom;
	height = newheight;
	thirst = newthirst;

	cout << "You used constructor 4" << endl;
}
