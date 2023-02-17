/*
CH-230-A
a11 p1.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include "Box.h"

using namespace std;

int main() {
    //Declare variable for the number of boxes and ask for it's value
    int n;
    cout << "Enter the number of boxes:" << endl;
    cin >> n;

    //Declare Box type pointer and allocate 2*n size for it
    Box *boxPtr = new Box[2*n];

    //Declare variables for height, width, and depth that will be used
    //for input in the for loop
    double height, width, depth;
    for (int i = 0; i < n; i++) {
        //Print out simple message
        cout << 
            "Enter the height, width, and depth for box " << i+1 << ":" 
        << endl;

        //Get height, width, and depth and set the values based on the 
        //input from user
        cin >> height;
        boxPtr[i].setHeight(height);
        cin >> width;
        boxPtr[i].setWidth(width);
        cin >> depth;
        boxPtr[i].setDepth(depth);

        //Also copy these values using the copy constructor
        boxPtr[i+n] = Box(boxPtr[i]);
    }

    //Delcare volume variable that will be used to store the volume of 
    //each box during the iteration of the for loop
    double volume;
    for (int i = 0; i < n*2; i++) {
        //Find the volume of the box using the volume method
        volume = boxPtr[i].volume();
        //Print out the message that states the volume for each box
        cout << 
            "This is the volume of box " << i+1 << ": " << volume 
        << endl;
    }

    //Delete the allocated memory
    delete [] boxPtr;
    return 0;
}