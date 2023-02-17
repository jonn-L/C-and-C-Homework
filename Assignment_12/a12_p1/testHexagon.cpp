/*
CH-230-A
a12 p1.cpp
Jon Lumi
jlumi@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std; 

int main () {
    //Create the instances as adivsed
    Hexagon h1("h1", 0, 0, 6, 9, "blue");
    Hexagon h2("h2", 0, 0, 6, 15, "green");
    Hexagon h3(h2);

    //Print out the hexagons
    cout << "H1: " << endl;
    h1.printHexagon();
    cout << endl;

    cout << "H2: " << endl;
    h2.printHexagon();
    cout << endl;

    cout << "H3: " << endl;
    h3.printHexagon();
    cout << endl;

    return 0;
}