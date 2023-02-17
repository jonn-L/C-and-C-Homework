/*
CH-230-A
a9 p9.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>

using namespace std;

int main(){
    //Delclare string array with all the words
    string arr[17] = {"computer", "television", "keyboard", "laptop", "mouse",
                      "university", "homework", "science", "constructor",
                      "aeiou", "airplane", "sleep", "apetito", "videogame",
                      "movie", "book", "laundry"};
    //Declare string with a temporary value
    string playerChoice = "temp";

    srand(static_cast < unsigned int > (time(0)));
    //Loop that ends when player chooses to stop playing by typing n when asked
    while (playerChoice != "n"){
        //Get a random number
        int randomNum;
        randomNum = rand() % 17;

        //Assign that random number as an index to the get the string
        //wordToGuess
        string wordToGuess = arr[randomNum];
        string wordToGuess_ = wordToGuess;

        //Change all vowes to "_"
        for (int i = 0; wordToGuess[i] != '\0'; i++){
            if (wordToGuess.at(i) == 'a' || wordToGuess.at(i) == 'e' || 
                wordToGuess.at(i) == 'i' || wordToGuess.at(i) == 'o' ||
                wordToGuess.at(i) == 'u'){
                    wordToGuess_.at(i) = '_';
                }
        }
        //Print it put
        cout << wordToGuess_ << endl;

        //Delclare the string that will hold the player's guess but first with
        //a temporary value
        string playerGuess = "temp";
        int numGuesses = 0;
        //Keep asking to guess until players guesses correctly
        while (playerGuess != wordToGuess){
            cin >> playerGuess;
            //Increment the number of guesses
            numGuesses++;
            //Stop the game if player types quit
            if (playerGuess == "quit"){
                return 0;
            }
        }
        //Print the number of guesses
        cout << "Number of guesses: " << numGuesses << endl;

        //Give a temporary value again for future looping
        playerChoice = "temp";
        //Ask until player enters a valid input (y or n)
        while (playerChoice != "y" && playerChoice != "n"){
            cout << "Would you like to play again? (y/n)" << endl;
            cin >> playerChoice;
        }
    }
    return 0;
}