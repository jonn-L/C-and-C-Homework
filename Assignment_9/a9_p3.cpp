/*
CH-230-A
a9 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>

//Dfine abs function
float abs(float &x){
    //Check is x is smaller than 0
    if (x < 0){
        //If so, change the sign by multiplying it by -1
        x = x*(-1);
    }
    return x;
}

int main(){
    //Declare float variable value and ask for it's value from user
    float value;
    std::cin >> value;

    //Call abs function and print out result
    abs(value);
    std::cout << value << std::endl;
    return 0;
}
