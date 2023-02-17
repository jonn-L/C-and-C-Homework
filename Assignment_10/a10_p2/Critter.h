/*
CH-230-A
a10 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

    //Added two data members: weight and age
   	double weight;
    int age;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

    //Added setter methods for new data members
    void setAge(int newage);
    void setWeight(double newweight);

	// getter method
	int getHunger();

    //Added getter method for age and weight
    int getAge();
	int getWeight();

	// service method
	void print();

};