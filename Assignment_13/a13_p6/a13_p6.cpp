/*
CH-230-A
a13 p6.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include <vector>
using namespace std;

int main () {
    //Declare a vector with 20 values of 8
    vector <int> vect(20, 8);

    try {
        //Try to access the 21th element
        vect.at(21);      
    }
    catch (const out_of_range &error) {
        //Print out to error once the error is caught
        cerr << "Index out of range! " << error.what() << endl;
    }
   

    return 0;
}
