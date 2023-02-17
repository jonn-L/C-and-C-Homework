/*
CH-230-A
a10 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
	//We change the variable type of hunger
	double hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
	// Adding constructors
	Critter();
	Critter(std::string name);
	Critter(std::string name, int hunger, int boredom, double height = 10);
};