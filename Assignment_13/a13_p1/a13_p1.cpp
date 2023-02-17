/*
CH-230-A
a13 p1.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //Create buffer
    const int bufferSize = 100;
    char buffer[bufferSize];

    //Get input of filename that user wants to copy
    string fileName;
    cin >> fileName;

    //Create the name for the copy file
    string copyFileName = fileName;
    int index = fileName.find(".txt");
    copyFileName.insert(index, "_copy");

    //Open input file and check for errors
    ifstream in(fileName);
    if (!in.good()) {
        cerr << "Error opening input file" << endl;
        exit(2);
    }

    //Open output file and check for errort
    ofstream out(copyFileName);
    if (!out.good()) {
        cerr << "Error opening output file" << endl;
        exit(3);
    }

    //Check the content of the input file and copy it to the output file
    while (in.getline(buffer, bufferSize)) {
        out << buffer << endl;
    }
    
    in.close();
    out.close();

    return 0;
}