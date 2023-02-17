/*
CH-230-A
a9 p6.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>

//Function that finds the first occuring positive number that is divisble by 2
int myfirst(int arr[5]){
    for (int i = 0; i < 5; i++){
        //Condition that checks if number is positive
        if (arr[i] > 0){
            //Condition that checks whether it's divisble by 2
            if (arr[i] % 2 == 0){
                return arr[i];
            }
        }
    }
    //If we dont, we return -1 as instructed
    return -1;
}

//Function that finds the first occuring positive number that is negative and
//and has no number after the decimal point
double myfirst(double arr[5]){
    for (int i = 0; i < 5; i++){
        //Condition that checks if number is negative
        if (arr[i] < 0){
            //Condition that checks whether it has numbers after the decimal
            //point
            if (arr[i] == (int)arr[i]){
                return arr[i];
            }
        }
    }
    //If we dont, we return -1.1 as instructed
    return -1.1;
}

//Function that finds the first occuring vowel
char myfirst(char arr[5]){
    for (int i = 0; i < 5; i++){
        //Create a temporary ch variable
        char ch = tolower(arr[i]);
        //Check if its a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            return arr[i];
        }
    }
    //If we dont, we return 0 as instructed
    return '0';
}

int main(){
    //Declare the arrays
    int arr1[5] = {-3, -5, -9, 1};
    double arr2[5] = {1.1, 7.5, 3, -2.3};
    char arr3[5] = {'a', 'e', 'i', 'u', 'o'};

    //Call the functions and print out the output
    std::cout << myfirst(arr1) << std::endl;
    std::cout << myfirst(arr2) << std::endl;
    std::cout << myfirst(arr3) << std::endl;

    return 0;
}