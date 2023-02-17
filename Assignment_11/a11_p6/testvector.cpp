/*
CH-230-A
a11 p6.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include "Vector.h"
using namespace std;

int main() {
    //Declare v1 and v2 as default vectors (the have the values {1,2,3,4})
    Vector v1, v2;
    //Declare v3 which is a copy of v2
    Vector v3(v2);
    //Declared v4 with given parameters
    double body4[4] = {5, 6, 7, 8};
    Vector v4(4, body4);

    //Calculate and print the norm of v2
    cout << "This is the norm of v2: " << v2.norm() << endl;

    //Calculate and print the scalar product of v2 and v4
    cout << 
        "This is the scalar product of v2 and v4: " << v2.scalar(v4) 
    << endl;

    //Calculate and print the addition of v2 and v4
    Vector sumV = v2.add(v4);
    cout << "This is the sum of v2 + v4:" << endl;
    sumV.print();
    cout << endl;

    //Calculate and print the difference of v2 and v4
    Vector diffV = v2.subtract(v4);
    cout << "This is the difference of v2 - v4:" << endl;
    diffV.print();
    cout << endl;

    return 0;
}