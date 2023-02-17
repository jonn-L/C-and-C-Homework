/*
CH-230-A
a11 p4.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;

int main() { 
    //Declared input string with a temporary value
    string input = "temp";

    //While loop that stops when user inputs quit
    while (input != "quit") {
        //Get input from user
        cin >> input;

        //Depending on the input, a new creature will be created via memory
        //allocation, its method will be valled, and then the memory will 
        //be deallocated+
        if (input == "wizard") {
            Wizard *w;
            w = new Wizard;
            w -> hover();
            delete w;
        }
        else if (input == "object1") {
            Knight *k;
            k = new Knight;
            k -> rideHorse();
            delete k;
        }
        else if (input == "object2") {
            Dragon *d;
            d = new Dragon;
            d -> fly();
            delete d; 
        }
    }
    
    return 0;
} 