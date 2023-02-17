/*
CH-230-A
a11 p1.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>

# ifndef _BOX_H
# define _BOX_H
class Box {
    private:
        //Declared private members
        double height;
        double width;
        double depth;
    public:
        //Declared constructors and destructor
        Box();
        Box(double newHeight, double newWidth, double newDepth);
        Box(const Box &copyBox);
        ~Box();

        //Declared setter methods
        void setHeight(double newHeight);
        void setWidth(double newWidth);
        void setDepth(double newDepth);

        //Declared getter methods
        double getHeight();
        double getWidth();
        double getDepth();

        //Declared volume method
        double volume();
};
# endif
