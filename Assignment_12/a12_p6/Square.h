#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

//Defined Square class derived from Rectangle
class Square : public Rectangle {
	public:
		Square(const char *n, double s);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double side;
};

#endif