/*
CH-230-A
a11 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include "Shapes.h"
using namespace std;

int main() {
    //Create instance of circle, and call the various methods
    Circle c("Circle", 1, 1, 1);
    c.printName();
    c.printCircle();
    cout << endl;

    //Create instance of recntangle and call various methods
    Rectangle r("Rectangle", 1, 1, 1, 2);
    r.printName();
    r.printRectangle();
    cout << endl;

    //Create instance of square and call various methods
    Square s("Square", 1, 1, 2);
    s.printName();
    s.printSquare();

    return 0;
}