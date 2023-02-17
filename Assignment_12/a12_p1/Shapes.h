/*
CH-230-A
a12 p1.cpp
Jon Lumi
jlumi@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	
};

class RegularPolygon : public CenteredShape { 
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon {
    private: 
        //Declared private members
        double side;
        std::string color;
    public:
        //Declared constructors, destrutor, and print method
        Hexagon(const std::string&, double, double, int, double, 
                const std::string&);
        Hexagon(const Hexagon&);
        ~Hexagon();
        void printHexagon();

        //Methods that return the perimeter and area
        double perimeter();
        double area();
        
        //Setters
        void setSide(double nSide);
        void setColor(const std::string nColor);

        //Getters
        double getSide() const;
        std::string getColor() const;


};
    
#endif