/*
CH-230-A
a11 p4.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include "Creature.h"
using namespace std;

//Define methods for Creature class
Creature::Creature(): distance(10) {
    cout << "Creature constructor called" << endl;
} 
Creature::~Creature() {
    cout << "Creature destructor called" << endl;
}   
void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
} 

//Define methods for Wizard class
Wizard::Wizard() : distFactor(3) {
    cout << "Wizard constructor called" << endl;
}  
Wizard::~Wizard() {
    cout << "Wizard destructor called" << endl;
}
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Define methods for Knight class
Knight::Knight() : horseFactor(2) {
    cout << "Knight constructor called" << endl;
}
Knight::~Knight() {
    cout << "Knight destructor called" << endl;
}
void Knight::rideHorse() const {
    cout << "riding horse " << (horseFactor * distance) << " meters!\n";
}

//Define methods for Dragon class
Dragon::Dragon() : flyFactor(4) {
    cout << "Dragon constructor called" << endl;
}
Dragon::~Dragon() {
    cout << "Dragon destructor called" << endl;
}
void Dragon::fly() const {
    cout << "flying "<< (flyFactor * distance) << " meters!\n";
}