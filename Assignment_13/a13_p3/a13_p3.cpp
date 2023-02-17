/*
CH-230-A
a13 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    //Create a buffer
    int bufferSize = 100;
    char buffer[bufferSize];

    //Open the out fle as trunc so that the content gets deleted on a re-run of
    //the program
    ofstream out("concatn.txt", ios::trunc | ios::binary);
    if (!out.good()) {
        cerr << "Error opening input file" << endl;
        exit(1);
    }

    //Get number of files from user
    int n;
    cin >> n;

    //Loop n-tiems
    for (int i = 0; i < n; i++) {
        //Get name of file from user
        string fileName;
        cin >> fileName;

        //Open the file
        ifstream in(fileName, ios::binary);
        if (!in.good()) {
        cerr << "Error opening input file" << endl;
        exit(2);
    }
        in.read(buffer, bufferSize);

        //Write it's content to the output file
        out.write(buffer, in.gcount());
        out << '\n';

        //Close input file
        in.close();
    }
    //Close output file
    out.close();

    return 0;
}