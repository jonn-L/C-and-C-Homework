#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"


//Added a calcPerimeter method for every shape

/*
				Area
				 ||
	   ==========||==========
	  ||                    ||
	Circle               Rectangle
	  ||                    ||
	 Ring                 Square

'Circle' and 'Rectange' are child classes of 'Area', 'Ring' is a child class 
of 'Circle', and 'Square' is a child class of 'Rectangle'.
*/

const int num_obj = 7;
int main() {
	/* 
	(1) - An Area pointer array is intialized with a size of 7 (num_obj = 7)
	and the name 'list'. This will hold all the shapes that will be initialized
	later in the program
	*/
	Area *list[num_obj];						// (1)
	/*
	(2) - A int variable is intialized with the name 'index' and the value 0. 
	This will be used to iterate through 'list' later.
	*/
	int index = 0;								// (2)
	/*
	(3) - A double variable is initialized with the name 'sum_area' and the 
	value 0,0. 'sum_area' will hold the total area of all the shapes in the
	'list'.
	The same thing goes for 'sum_perimeter'.
	*/
	double sum_area = 0.0;						// (3)
	double sum_perimeter = 0.0;
	/*
	(4) - Different shapes are being intialized using their respective paramter
	constructor. A message is also being printed along with each intialization
	stating what type of shape is being intialized
	*/
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square brown_square("BROWN", 8);
	/*
	(5) - Each shape that was created is being assigned a spot in 'list' by 
	reference.
	*/
	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &brown_square;
	/*
	(7) - 'list' is being iterated using 'index < num_obj' as a condition. For
	each iteration, the color of the shape is being printed out using the 
	getColor() method, and the its perimeter and area is being calculated using
	the methods calcPerimeter() and calcArea().
	*/
	while (index < num_obj) {					// (7)
		(list[index])->getColor();	
		double perimeter = list[index]->calcPerimeter();	
		/*
		(8) - Each iteration, the double variable 'area' is being intialized 
		that holds the value of the area of the current shape in the iteration.
		'list[index++]->calcArea()' means that the shape's area is first 
		calculated, and then the 'index' variable is icrement by 1. Finally,
		'sum_area' is incremented by 'area'.
		The same thing applies to 'perimeter' and 'sum_perimeter', except there
		we do not increment 'index' since that would result in the index of 
		'list' going out of range.
		*/		
		double area = list[index++]->calcArea();// (8)
		sum_area += area;
		sum_perimeter += perimeter;
	}
	cout << "\nThe total area is "
	/*
	(9) - 'sum_area' is printed along with a message
	*/
			<< sum_area << " units " << endl;	// (9)

	cout << "\nThe total perimeter is "
	/*
	(9) - 'sum_perimeter' is printed along with a message
	*/
			<< sum_perimeter << " units " << endl;
	return 0;
}
