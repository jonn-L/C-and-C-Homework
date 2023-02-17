/*
CH-230-A
a13 p7.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;

class OwnException : exception {
    private:
        string message;
    public:
        //Default constructor setting the message
        OwnException() : message("Default case exception\n"){}

        //Overloading .what()
        virtual const char* what() const noexcept override {
            return message.c_str();
        }
};

//Funtion that handels error throwing
void errorThrow (int errorNum) {
    //Switch case that throws error based on the paramter
    switch (errorNum) {
        case 1:
            throw 'a';
            break;
        case 2:
            throw 12;
            break;
        case 3:
            throw true;
            break;
        default:
            throw OwnException();
            break;       
    }
}

int main () {
    //Try the fucntion for value 1
    try {
        errorThrow(1);
    }
    catch (const char &err) {
        cerr << "Caught in main: " << err << endl;
    }

    //Try the fucntion for value 2
    try {
        errorThrow(2);
    }
    catch (const int &err) {
        cerr << "Caught in main: " << err << endl;
    }

    //Try the fucntion for value 3
    try {
        errorThrow(3);
    }
    catch (const bool &err) {
        cerr << "Caught in main: " << err << endl;
    }

    //Try the fucntion for a default value
    try {
        errorThrow(4);
    }
    catch (OwnException &err) {
        cerr << "Caught in main: " << err.what() << endl;
    }
    return 0;
}