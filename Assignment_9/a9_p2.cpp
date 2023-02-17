/*
CH-230-A
a9 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
using namespace std;

int main(){
    //Declare n and ask for it's value
    int n;
    cin >> n;

    //Declare x and ask for it's value
    double x;
    cin >> x;

    //Declare s and ask for it's value
    string s;
    cin >> s;

    //Print it n times through a while loop
    while (n > 0){
        cout << s << " : " << x << '\n';
        n--;
    }
    return 0;
}