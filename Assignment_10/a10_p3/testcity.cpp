/*
CH-230-A
a10 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "City.h"

using namespace std;

int main () {
    //Declare the cities
    City city1, city2, city3;

    //Declare the values we will use for city 1
    string city1name = "Bremen";
    int city1population = 569352;
    string city1mayor = "Andreas Bovenschulte";
    double city1area = 326.7;

    //Set those values and print them
    city1.setCityName(city1name);
    city1.setCityPopulation(city1population);
    city1.setMayorName(city1mayor);
    city1.setCityArea(city1area);
    city1.printCity();

    cout << endl;

    //Declare the values we will use for city 2
    string city2name = "Paris";
    int city2population = 2161000;
    string city2mayor = "Anne Hidalgo";
    double city2area = 105.4;

    //Set those values and print them
    city2.setCityName(city2name);
    city2.setCityPopulation(city2population);
    city2.setMayorName(city2mayor);
    city2.setCityArea(city2area);
    city2.printCity();

    cout << endl;

    //Declare the values we will use for city 3
    string city3name = "London";
    int city3population = 8982000;
    string city3mayor = " Sadiq Khan";
    double city3area = 1572;

    //Set those values and print them 
    city3.setCityName(city3name);
    city3.setCityPopulation(city3population);
    city3.setMayorName(city3mayor);
    city3.setCityArea(city3area);
    city3.printCity();

    return 0;
}