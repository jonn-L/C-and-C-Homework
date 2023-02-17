/*
CH-230-A
a10 p1.cpp
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

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};


/*Explanations
1) Commenting out "using namespace std;":
When we comment out this line of code, the error that pops out is "indetifier
(cin, cout, string, etc.) is not defined". This is because these identfiers are
part of the "std" library, and since we're not using the "std::" as a prefix
in the global scope (becuase we're commenting out the "using namespace std;" 
line), the compiler cannot identify them.
One way to fix this issue is to add the "std::" prefix to these identifers
ourselves.
-------------------------------------------------------------------------------
2) Removing "Critter::"
When we remove the "Critter::" prefix from the one of the methods defined in 
"Critter.cpp file", the error that we get is "indetifier (name, hunger, height
etc.)  is not defined". This is because without the "Critter::" prefix, we are
actually only decalring a function, and this leads to the compiler not being
able to recongize these identifers as data memebers of the "Critter" class.

One way to define the method without using the "Critter::" prefix is to 
actually define it inside the class definition in the "Critter.h" file. The 
problem with this fix though is that the header file should only be used to 
declare things, not define them.
*/