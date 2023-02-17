/*
CH-230-A
a13 p4.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  virtual public A
{
public:
  B()  { setX(10); }
};
 
class C:  virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*
Intial error: D::print is ambigious

The reason for this is the multiple inhertiance. Both class B and C are 
inherting from Class A. Then, class D is inherting from class B and C. 
As a result, class D is inherting two copies of class A, which is what
makes the error come up.
To fix this, all we need to do is inherit class A virtually in class B 
and C. 
*/