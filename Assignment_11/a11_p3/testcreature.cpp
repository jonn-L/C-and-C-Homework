/*
CH-230-A
a11 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;

//Put the main function in a seperate file called testcreature and included
//header file

int main() { 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Knight.\n";
    Knight k;
    k.run();
    k.rideHorse();

    cout <<"\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.fly();
    
    return 0;
} 