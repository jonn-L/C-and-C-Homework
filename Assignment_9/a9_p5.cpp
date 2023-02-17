/*
CH-230-A
a9 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
using namespace std;

int main(){
    //Declare string name ask for user's name
    string name;
    cout << "Enter your name: ";
    cin >> name;

    //Declare randomNum integer and get his value through srand and rand
    int randomNum;
    srand(static_cast < unsigned int > (time(0)));
    randomNum = (rand() % 100) + 1;

    //Declare variable tries and playerguess
    int tries = 0;
    int playerGuess = 0;

    //While loop until player guesses right
    while (playerGuess != randomNum){
        //Get guess from user
        cin >> playerGuess;
        //Check whether the guess was too high or too low and print a message
        //accordingly
        if (playerGuess > randomNum){
            cout << "Too high" << endl;
        }
        else if (playerGuess < randomNum){
            cout << "Too low" << endl;
        }
        //Increment number of tries
        tries++;
    }

    //Congratulate player and print out the number of tires it took to guess 
    //correctly
    cout << "Congratulations " << name << endl;
    cout << "It took you " << tries << " tries" << endl;
    return 0;
}