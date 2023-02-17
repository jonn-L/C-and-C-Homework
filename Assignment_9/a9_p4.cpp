/*
CH-230-A
a9 p4.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>

//Define function that e difference between the second and first parameter
int mycount(int x, int y){
    return y - x;
}

//Define function that counts the number of occurrences of a character
int mycount(char ch, std::string str){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (str.at(i) == ch){
            count ++;
        }
    }
    return count;
}

int main(){
    //When we input integers, we get the differene
    std::cout << mycount(7,3) << std::endl;

    //When we input a char and a string, we get the number of occurrences
    std::cout << mycount('i', "this is a string") << std::endl;
    return 0;
}