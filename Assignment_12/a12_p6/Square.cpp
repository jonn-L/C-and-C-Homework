#include <iostream>
#include "Square.h"

//Parameter constructor
Square::Square(const char *n, double s) : Rectangle(n, s, s) {
    side = s;
}

//Destructor
Square::~Square() {
}

//CaclArea method
double Square::calcArea() const {
	std::cout << "calcArea of Sqaure...";
	return side*side;
}

//CalcPeriemeter method
double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return 4*side;
}
