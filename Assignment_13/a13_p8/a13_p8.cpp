/*
CH-230-A
a13 p8.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;

class Motor {
    public:
        //Motor default constructor throws exception
        Motor() {
        throw "This motor has problems";
        }
};

class Car {
    public:
        // Car default construtor calls Motor constrcutor. Then, it catches
        //error and throws it
        Car() {
            try {
                Motor m;
            }
            catch (const char *&error) {
                throw error;
            }
        }
};

class Garage {
    private:
        //Create private member to use it in the function level try block
        Car c;
    public:
        Garage()

        //Function-level try block that catches error thrown by car constructor
        try : c() {}
        catch (const char *&error) {
            throw "The car in this garage has problems with the motor";
        }
};



int main() {
    //Call garage constructor and logs the error message it throws
    try {
        Garage g;
    }
    catch (const char *&error) {
        cerr << error << endl;
    }
    return 0;
}