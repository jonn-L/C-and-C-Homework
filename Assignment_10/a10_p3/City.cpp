/*
CH-230-A
a10 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "City.h"

using namespace std;

//Setter function for the different data members
void City::setCityName(string &newcityname) {
    cityName = newcityname;
}
void City::setCityPopulation(int newcitypopulation) {
    cityPopulation = newcitypopulation;
}
void City::setMayorName(string &newmayorname) {
    mayorName = newmayorname;
}
void City::setCityArea(double newcityarea) {
    cityArea = newcityarea;
}

//Getter functions for the different data members
string City::getCityName() {
    return cityName;
}
int City::getCityPopulation() {
    return cityPopulation;
}
string City::getMayorName() {
    return mayorName;
}
double City::getCityArea() {
    return cityArea;
}

//Print function that prints the values of the data members
void City::printCity() {
    cout 
        << "The name of the city is: " << cityName << '\n'
        << "The number of the population is: " << cityPopulation << '\n'
        << "The name of the city's mayor is: " << mayorName << '\n'
        << "The area of the city in km^2 is: " << cityArea << 
    endl;
}