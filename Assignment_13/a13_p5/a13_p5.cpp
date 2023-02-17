/*
CH-230-A
a13 p5.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public:
  D() : A(10) {}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*
The error that comes up is due to the class D and A not having a default
constructor (this is called in line 37). To fix this, we can do one of 
two things:
(1) - Create a defualt constructor for class A
(2) - Create a default constructor for class D that calls the paramteric
constructor of class A
*/