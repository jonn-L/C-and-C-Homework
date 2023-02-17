#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

//Declared num_obj variable with value of 25. This will me the number
//of shapes created
const int num_obj = 25;
int main() {
	//String array that holds all the possible shapes
	string shapes[4] = {"Circle", "Rectangle", "Ring", "Square"};
	//Const char array that hold the colors
	const char *colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};

	//For loop that loops 'num_obj' times
	srand(static_cast < unsigned int > (time(0)));
	for (int i = 0; i < num_obj; i++) {

		//Get a random index to assign a shape for iteration
		int randomShape = rand() % 4;
		string shape = shapes[randomShape];

		//Get a random index to assign a color for iteration
		int randomColor = rand() % 4;
		const char *color = colors[randomColor];

		//Condition branches for each shape
		if (shape == "Circle") {
			//Get random size for radius
			int randomRadius = (rand() % 96) + 5;

			//Create circle with that radius
			cout << "Creating Circle..." << endl;
			Circle c(color, randomRadius);

			//Calculate area and perimeter
			double area = c.calcArea();
			double perimeter = c.calcPerimeter();

			//Print out shape characteristics
			c.getColor();
			cout << "Area = " << area;
			cout << ", Perimeter = " << perimeter << endl;
		}
		else if (shape == "Rectangle") {
			//Get random length and width
			int randomLength = (rand() % 96) + 5;
			int randomWidth = (rand() % 96) + 5;

			//Create rectangle with those parameters
			cout << "Creating Rectangle..." << endl;
			Rectangle r(color, randomLength, randomWidth);

			//Calculate area and perimeter
			double area = r.calcArea();
			double perimeter = r.calcPerimeter();

			//Print out shape characteristics
			r.getColor();
			cout << "Area = " << area;
			cout << ", Perimeter = " << perimeter << endl;
		}
		else if (shape == "Ring") {
			//Get inner and outter radius
			int randomInRadius = (rand() % 96) + 5;
			int randomOutRadius = (rand() % 96) + 5;

			//Create ring with those parameters
			cout << "Creating Ring..." << endl;
			Ring rc(color, randomOutRadius, randomInRadius);

			//Calculate area and perimeter
			double area = rc.calcArea();
			double perimeter = rc.calcPerimeter();

			//Print out shape characteristics
			rc.getColor();
			cout << "Area = " << area;
			cout << ", Perimeter = " << perimeter << endl;
		}
		else {
			//Get random side length
			int randomSide = (rand() % 96) + 5;

			//Create square with that side length
			cout << "Creating Square..." << endl;
			Square s(color, randomSide);

			//Calculate area and perimeter
			double area = s.calcArea();
			double perimeter = s.calcPerimeter();

			//Print out shape characteristics
			s.getColor();
			cout << "Area = " << area;
			cout << ", Perimeter = " << perimeter << endl;
		}
		cout << endl;
	}
	return 0;
}