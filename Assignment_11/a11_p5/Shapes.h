/*
CH-230-A
a11 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

//Shape class created
class Shape {		
	private:  
        //Declare data member name 		
		std::string name;
	public:
        //Declared the various constructors and methods
		Shape(const std::string&); 
		Shape();				
		Shape(const Shape&);
		void printName() const;  

        //Declared setter and getter method
        void setName(const std::string &nName);
        std::string getName() const;
};

//Centered Shape class created dervied from Shape
class CenteredShape : public Shape { 
	private: 
        //Declared data member x and y (coordinates)
		double x,y; 
	public:
        //Declared the various constructors and methods
		CenteredShape(const std::string&, double, double); 
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);

        //Declared setter and getter methods
        void setX(double nX);
        void setY(double mY);
        double getX() const;
        double getY() const;
};

//Circle class made as child class of Centered Shape
class Circle : public CenteredShape {
	private:
        //Declared data member radius
		double Radius;
	public:
        //Declared the various constructors and methods
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
        void printCircle();

        //Declared setter and getter method
        void setRadius(double nRadius);
        double getRadius() const;

        //Declared methods that return perimeter and area
        double perimeter();
        double area();

};

//Regular polygon class dervied from Centered Shape
class RegularPolygon : public CenteredShape {
	private: 
        //Declared data member Edges Number
		int EdgesNumber;
	public:
        //Declared the various constructors and methods
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

        //Declared setter and getter method
        void setEdgeNumber(int nEdgeNumber);
        int getEdgeNumber() const;
};

//Rectangle class with parent class Regular Polygon
class Rectangle : public RegularPolygon {
    private:
        //Declared data member width and height
        double width;
        double height;
    public:
        //Declared the various constructors and methods
        Rectangle(const std::string& n, double nx, double ny, 
                  double nwidth, double nheight);
        Rectangle();
        Rectangle(const Rectangle&);
        void printRectangle();

        //Declared setter and getter methods
        void setWidth(double nWidth);
        void setHeight(double nHeight);
        double getWidth() const;
        double getHeight() const;

        //Declared methods that return perimeter and area
        double perimeter();
        double area();

};

//Square class dervied from Rectangle class
class Square : public Rectangle {
    private:
        //Declared data member side
        double side;
    public:
        //Declared the various constructors and methods
        Square(const std::string& n, double nx, double ny, double nside);
        Square();
        Square(const Square&);
        void printSquare();

        //Declared setter and getter method
        void setSide(double nSide);
        double getSide() const;

        //Declared methods that return perimeter and area
        double perimeter();
        double area();
};

#endif