/*
CH-230-A
a12 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include"TournamentMember.h"
using namespace std;

int main () {
    //Create players using the various constructors
    Player p1;
    Player p2("Vedat", "Muriqi", "04-04-1444", 10, 180, 
              11, "Forward", 100, false);
    Player p3(p2);
    //Set the location to Hamburg
    p1.setLocation("Hamburg");
    p2.setLocation("Hamburg");
    p3.setLocation("Hamburg");
    p2.goalsIncrement();

    //Print out the info for each player
    cout << "Player 1: " << endl;
    p1.printMember();
    p1.printPlayer();
    cout << endl;

    cout << "Player 2: " << endl;
    p2.printMember();
    p2.printPlayer();
    cout << endl;

    cout << "Player 3: " << endl;
    p2.printMember();
    p3.printPlayer();
    cout << endl;

    return 0;
}