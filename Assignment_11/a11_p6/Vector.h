/*
CH-230-A
a11 p6.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#ifndef _VECTOR_H
#define _VECTOR_H

//Declare Vector class
class Vector {
    private:
        //Declare data members size and body (contains content of vector)
        int size;
        double *body;
    public:
        //Declare the various constructors, destructor, and print method
        Vector();
        Vector(int size, double *body);
        Vector(const Vector&);
        ~Vector();
        void print() const;

        //Declare setters
        void setSize(int size);
        void setBody(double *&body);

        //Declare getters
        int getSize() const;
        double *getBody() const;

        //Declare computational methods
        double norm();
        double scalar(const Vector) const;
        Vector add(const Vector) const;
        Vector subtract(const Vector) const;

};




#endif