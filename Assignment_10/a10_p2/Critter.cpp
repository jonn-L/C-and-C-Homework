/*
CH-230-A
a10 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

//Defined the setter functions for the new data members
void Critter::setWeight(double newweight) {
    weight = newweight;
}
void Critter::setAge(int newage) {
    age = newage;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

//Modified the print method to include new data members
void Critter::print() {
	cout << 
        "I am " << name << ". My hunger level is " << hunger << "." 
        << " My age is " << age << ". My weight in kg is " << weight << "."
    << endl;
}

int Critter::getHunger() {
	return hunger;
}

//Added getter method for age and eye color
int Critter::getAge() {
    return age;
}
int Critter::getWeight() {
    return weight;
}