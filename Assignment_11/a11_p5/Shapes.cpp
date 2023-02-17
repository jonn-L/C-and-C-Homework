/*
CH-230-A
a11 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
using namespace std; 

//Constructor that takes name as parametr
Shape::Shape(const string &n) : name(n) {}
//Empty constructor that sets default name
Shape::Shape() : name("default_shape") {}
//Copy constructor
Shape::Shape(const Shape &copyShape) {
    name = copyShape.name;
}
//Setter and getter methods
void Shape::setName(const string &nName) {
    name = nName;
}
string Shape::getName() const {
    return name;
}
//Print name method
void Shape::printName() const {
	cout << name << endl;
}


//Constructor that takes name, x, and y as parameters
CenteredShape::CenteredShape(const string &n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
//Empty constructor that sets default values
CenteredShape::CenteredShape() : Shape(), x(0), y(0) {}
//Copy constructor
CenteredShape::CenteredShape(const CenteredShape &copyCenteredShape) 
                             : Shape(copyCenteredShape) {
    x = copyCenteredShape.x;
    y = copyCenteredShape.y;

}
//Method to change x and y
void CenteredShape::move(double nX, double nY) {
    x = nX;
    y = nY;
}
//Setter and getter methods
void CenteredShape::setX(double nX) {
    x = nX;
}
void CenteredShape::setY(double nY) {
    y = nY;
}
double CenteredShape::getX() const {
    return x;
}
double CenteredShape::getY() const {
    return y;
}


//Constructor that takes name, x, y, and radius as parameters
Circle::Circle(const string &n , double nX, double nY, double nR) 
                : CenteredShape(n, nX, nY) {
    Radius = nR;
}
//Empty constructor that sets default radius
Circle::Circle() : CenteredShape(), Radius(1) {}
//Copy constructor
Circle::Circle(const Circle &copyCircle) : CenteredShape(copyCircle) {
    Radius = copyCircle.Radius;
}
//Setter and getter method
void Circle::setRadius(double nR) {
    Radius = nR;
}
double Circle::getRadius() const{
    return Radius;
}
//Methods that return perimeter and area of a cricle
double Circle::perimeter() {
    return 2*3.14*getRadius();
}
double Circle::area() {
    return 3.14*getRadius()*getRadius();
}
//Method that prints the perimeter and area of a circle
void Circle::printCircle() {
    cout << "Perimeter: " << perimeter() << "\nArea: " << area() << endl;
}


//Constructor method that takes name, x, y, and edges number as parameters
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nL) :
	                           CenteredShape(n,nx,ny) {
	EdgesNumber = nL;
}
//Empty constructor that sets default value to EdgesNumber
RegularPolygon::RegularPolygon() : CenteredShape(), EdgesNumber(4) {}
//Copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon &copyPolygon) 
                               : CenteredShape(copyPolygon) {
    EdgesNumber = copyPolygon.EdgesNumber;
}
//Setter and gettter methods
void RegularPolygon::setEdgeNumber(int nEdges) {
    EdgesNumber = nEdges;
}
int RegularPolygon::getEdgeNumber() const {
    return EdgesNumber;
}


//Construtor that takes name, x, y, width, and height as parameters
Rectangle::Rectangle(const string &n, double nX, double nY,
        double nWidth, double nHeight) : RegularPolygon(n, nX, nY, 4) {
    width = nWidth;
    height = nHeight;
}
//Empty constructor that sets default values
Rectangle::Rectangle() : RegularPolygon(), width(2), height(1) {}
//Copy constructor
Rectangle::Rectangle(const Rectangle &copyRectangle) 
                     : RegularPolygon(copyRectangle) {
    width = copyRectangle.width;
    height = copyRectangle.height;
}
//Setter and getter methods
void Rectangle::setWidth(double nW) {
    width = nW;
}
void Rectangle::setHeight(double nH) {
    height = nH;
}
double Rectangle::getWidth() const {
    return width;
}
double Rectangle::getHeight() const {
    return height;
}
//Methods to find perimeter and area of a rectangle
double Rectangle::perimeter() {
    return 2*getHeight() + 2*getWidth();
}
double Rectangle::area() {
    return getHeight()*getWidth();
}
//Method to print perimeter and area of a rectangle
void Rectangle::printRectangle() {
    cout << "Perimeter: " << perimeter() << "\nArea: " << area() << endl;
}


//Constructor that takes name, x, y, and side as parameters
Square::Square(const string& n, double nX, double nY, double nSide) : 
               Rectangle(n, nX, nY, getSide(), getSide()) {
    side = nSide;
}
//Empty constructor that sets sides to a default value
Square::Square() : Rectangle(), side(1) {}
//Copy constructor
Square::Square(const Square &copySquare) : Rectangle(copySquare){
    side = copySquare.side;
}
//Setter and getter methods
void Square::setSide(double nSide) {
    side = nSide;
}
double Square::getSide() const {
    return side;
}
//Methods to find perimeter and area of a square
double Square::perimeter() {
    return 4*getSide();
}
double Square::area() {
    return getSide()*getSide();
}
//Method to print out perimeter and area of a square
void Square::printSquare() {
    cout << "Perimeter: " << perimeter() << "\nArea: " << area() << endl;
}
