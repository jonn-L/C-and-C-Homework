/*
CH-230-A
a12 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include"TournamentMember.h"
using namespace std;

int main () {
    //Use the different constructors to make instances of tournament member
    TournamentMember a;
    TournamentMember b("Bob", "Ross", "1990-31-12", 5, 170);
    TournamentMember c(a);
    TournamentMember d;
    //Using the setter methods to create d
    d.setFirstName("first_name");
    d.setLastName("last_name");
    d.setDOB("1900-05-05");
    d.setExperience(10);
    d.setHeight(160);

    //Print out the members
    a.printMember();
    cout << endl;

    b.printMember();
    cout << endl;

    c.printMember();
    cout << endl;

    d.printMember();
    cout << endl;

    return 0;
}