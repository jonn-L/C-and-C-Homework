/*
CH-230-A
a12 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include<cstring>
#include"TournamentMember.h"
using namespace std;

//Give a value to location private member
string TournamentMember::location = "Suhareka, Kosovo";

//Default constructor
TournamentMember::TournamentMember() 
        : TournamentMember("John", "Doe", "2000-01-01", 1, 180) {
    cout << "Default constructor called" << endl;
}
//Parameter constructor
TournamentMember::TournamentMember(const char firstName[], 
    const char lastName[], const char dob[], int experience, float height) {
    cout << "Parameter constructor called" << endl;

    //Here we use strcpy since the strings are inputed as char arrays
    strcpy(this->firstName, firstName);
    strcpy(this->lastName, lastName);
    strcpy(this->dob, dob);
    this->experience = experience;
    this->height = height;
}
//Copy constructor
TournamentMember::TournamentMember(const TournamentMember &copy) {
    cout << "Copy constructor called" << endl;
    
    strcpy(this->firstName, copy.firstName);
    strcpy(this->lastName, copy.lastName);
    strcpy(this->dob, copy.dob);
    this->experience = copy.experience;
    this->height = copy.height;
}
//Destructor
TournamentMember::~TournamentMember() {
    cout << "Destructor called" << endl;
}
//Print method
void TournamentMember::printMember() {
    cout << "Firstname: ";
    for (int i = 0; firstName[i] != '\0'; i++) {
        cout << firstName[i];
    }
    cout << endl;
    cout << "Lastname: ";
    for (int i = 0; lastName[i] != '\0'; i++) {
        cout << lastName[i];
    }
    cout << endl;
    cout << "Date-of-birth: ";
    for (int i = 0; dob[i] != '\0'; i++) {
        cout << dob[i];
    }
    cout << endl;
    cout << "Years of experience: " << experience << endl;
    cout << "Height: " << height << endl;
    cout << "Location: " << location << endl;
}

//Default constructor
Player::Player() : TournamentMember(), number(10), position("Reserve"), 
                   goals(0), isRightFoot(true) {
    cout << "Player default constructor called" << endl;
}

//Parameter constructor
Player::Player(const char firstName[], const char lastName[], const char dob[],
               int experience, float height, int number, const string position,
               int goals, bool isRightFoot) 
            : TournamentMember(firstName, lastName, dob, experience, height){
    cout << "Player parameter constructor called" << endl;

    this->number = number;
    this->position = position;
    this->goals = goals;
    this->isRightFoot = isRightFoot;
}

//Copy constructor
Player::Player(Player &copyPlayer) : TournamentMember(copyPlayer) {
    cout << "Player copy constructor called" << endl;

    this->number = copyPlayer.number;
    this->position = copyPlayer.position;
    this->goals = copyPlayer.goals;
    this->isRightFoot = copyPlayer.isRightFoot;
}

//Destructor
Player::~Player() {
    cout << "Player destructor called" << endl;
}
//Print method
void Player::printPlayer() const {
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Goals: " << goals << endl;
    cout << "Dominant foot: " ;
    if (isRightFoot) {
        cout << "Right" << endl;
    }
    else {
        cout << "Left" << endl;
    }
}
//Goal incrementation method
void Player::goalsIncrement() {
    goals++;
}
