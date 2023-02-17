/*
CH-230-A
a11 p1.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include "Box.h"

//Defined the constructors and destructor
Box::Box() {
    height = 0;
    depth = 0;
    height = 0;

    std::cout << "Default constructor has been called" << std::endl;
}
Box::Box(double newHeight, double newWidth, double newDepth) {
    height = newHeight;
    width = newWidth;
    depth = newDepth;

    std::cout << "Set constructor has been called" << std::endl;
}
Box::Box(const Box &copyBox) {
    height = copyBox.height;
    width = copyBox.width;
    depth = copyBox.depth;

    std::cout << "Copy constructor has been called" << std::endl;
}
Box::~Box() {
    std::cout << "Destructor has been called" << std::endl;
}

//Defined setter methods
void Box::setHeight(double newHeight) {
    height = newHeight;
}
void Box::setWidth(double newWidth) {
    width = newWidth;
}
void Box::setDepth(double newDepth) {
    depth = newDepth;
}

//Defined getter methods
double Box::getHeight() {
    return height;
}
double Box::getWidth() {
    return width;
}
double Box::getDepth() {
    return depth;
}

//Defined volume method
double Box::volume() {
    return (height * width * depth);
}