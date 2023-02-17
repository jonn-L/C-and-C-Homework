/*
CH-230-A
a13 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include "Complex.h"
#include <fstream>
using namespace std;

int main() {
    //Opening the first file 
    ifstream in1("in1.txt");
    if (!in1.good()) {
        cerr << "Error opening input file" << endl;
        exit(1);
    }

    //Opening the second file
    ifstream in2("in2.txt");
    if (!in2.good()) {
        cerr << "Error opening input file" << endl;
        exit(2);
    }

    //Creating the two complex numbers
    Complex c1;
    Complex c2;

    //Assigning the values from the files to the complex numbers
    in1 >> c1;
    in2 >> c2;

    //Printing them out to the terminal
    cout << c1;
    cout << c2;

    //Closing the two files
    in1.close();
    in2.close();

    //Opening the output file
    ofstream out("result.txt");
    if (!out.good()) {
        cerr << "Error opening input file" << endl;
        exit(3);
    }

    //Output the result of addition to the terminal and file
    cout << "c1 + c2: ";
    cout << c1 + c2;
    out << "c1 + c2: ";
    out << c1 + c2;

    //Output the result of subtraction to the terminal and file
    cout << "c1 - c2: ";
    cout << c1 - c2;
    out << "c1 - c2: ";
    out << c1 - c2;

    //Output the result of multiplication to the terminal and file
    cout << "c1 * c2: ";
    cout << c1 * c2;
    out << "c1 * c2: ";
    out << c1 * c2;

    //Close the output file
    out.close();
    
    return 0;
}