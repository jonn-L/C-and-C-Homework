/*
CH-230-A
a9 p7.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>

using namespace std;

void swapping(int &a, int &b){
    //Create temp int variable
    int temp;
    //Use it to swap the values
    temp = a;
    a = b;
    b = temp;
} // swap ints

void swapping(float &a, float &b){
    //Create temp float variable
    float temp;
     //Use it to swap the values
    temp = a;
    a = b;
    b = temp;
} // swap floats

void swapping(const char *&a, const char *&b){
    //Create temp char pointer variable
    const char *temp;
     //Use it to swap the values
    temp = a;
    a = b;
    b = temp;
} // swap char pointers

int main(void) {
    //Declare the variables
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    //Print out values before swapping
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    //Swap values
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    //Print out results after the swapping occurs
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}