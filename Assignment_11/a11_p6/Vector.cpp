/*
CH-230-A
a11 p6.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
#include "Vector.h"
#include<math.h>
using namespace std;

//Define default constructor
Vector::Vector() {
    size = 4;
    double *nBody = new double[size] {1, 2, 3, 4};
    body = nBody;
}
//Define constructor that takes parameters
Vector::Vector(int nSize, double nBody[]) {
    size = nSize;
    body = new double[nSize];
    for (int i = 0; i < nSize; i++) {
        body[i] = nBody[i];
    }
}
//Define copy constructor
Vector::Vector(const Vector &copyVector) {
    size = copyVector.size;
    body = new double[copyVector.size];
    for (int i = 0; i < size; i++) {
        body[i] = copyVector.body[i];
    }
}

//Defined destructor 
Vector::~Vector() {
    cout << "Destructor called" << endl;
    delete [] body;
}
//Defined print method
void Vector::print() const {
    for (int i = 0; i < size; i++) {
        cout << body[i] << ' ';
    }
}

//Defined setters
void Vector::setSize(int nSize) {
    size = nSize;
}
void Vector::setBody(double *&nBody) {
    body = nBody;
}

//Defined getters
int Vector::getSize() const {
    return size;
}
double *Vector::getBody() const {
    return body;
}

//Defined method that calculates the norm
double Vector::norm() {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + body[i]*body[i];
    }

    return pow(sum, 1/2.0);
}

//Defined method that calculates the scalar product of two vectors
double Vector::scalar(const Vector v2) const {
    double result = 0;
    for (int i = 0; i < size; i++) {
        result = result + body[i]*v2.body[i];
    }

    return result;
}

//Defined method that adds two vectors
Vector Vector::add(const Vector v2) const {
    Vector result;
    for (int i = 0; i < size; i++) {
        result.body[i] = body[i] + v2.body[i];
    }

    return result;
}

//Defined method that substracts two vectors
Vector Vector::subtract(const Vector v2) const {
    Vector result;
    for (int i = 0; i < size; i++) {
        result.body[i] = body[i] - v2.body[i];
    }

    return result;
}   



