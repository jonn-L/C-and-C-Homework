/*
CH-230-A
a12 p1.cpp
Jon Lumi
jlumi@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <math.h>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}
void Shape::printName() const {
	cout << name << endl;
}
Shape::Shape(const Shape &copyShape) {
    name = copyShape.name;
}
Shape::Shape() : name("default_shape") {}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(const CenteredShape &copyCenteredShape) 
                             : Shape(copyCenteredShape) {
    x = copyCenteredShape.x;
    y = copyCenteredShape.y;

}
CenteredShape::CenteredShape() : Shape(), x(0), y(0) {}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(const RegularPolygon &copyPolygon) 
                               : CenteredShape(copyPolygon) {
    EdgesNumber = copyPolygon.EdgesNumber;
}
RegularPolygon::RegularPolygon() : CenteredShape(), EdgesNumber(6) {}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}


//Defined all the constructos
Hexagon::Hexagon(const string& nName, double nX, double nY, int nE, 
double nS, const string& nColor) : RegularPolygon(nName, nX, nY, nE) {
    cout << "Constructor called" << endl;
    side = nS;
    color = nColor;
}
Hexagon::Hexagon(const Hexagon &copyHexagon) : RegularPolygon(copyHexagon){
    cout << "Copy constructor called" << endl;
    side = copyHexagon.side;
    color = copyHexagon.color;
}
//Defined the destructor
Hexagon::~Hexagon() {
    cout << "Destructor called" << endl;
}
//defined the print method
void Hexagon::printHexagon() {
    cout << 
        "Color: " << getColor() << "\nPerimeter: " << perimeter() 
        << "\nArea:" << area() 
    << endl;
}
//Defined the setters and getters
void Hexagon::setSide(double nSide) {
    side = nSide;
}
void Hexagon::setColor(const string nColor) {
    color = nColor;
}
double Hexagon::getSide() const {
    return side;
}
string Hexagon::getColor() const {
    return color;
}
//Defined the methods that return the perimeter and area
double Hexagon::perimeter() {
    return 6*side;
}
double Hexagon::area() {
    return (3*sqrt(3)*side*side)/2.0;
}