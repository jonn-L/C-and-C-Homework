/*
CH-230-A
a11 p2.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <iostream>
using namespace std;

class Creature {
	public:
        //Declared default constructor and destrcutor
		Creature();  
        ~Creature();
        //Declared run method
		void run() const;

	protected:
        //Declared distance data member
		int distance;
};

//Defined the constructor
Creature::Creature(): distance(10){
    cout << "Creature constructor called" << endl;
}  
//Defined the destructor
Creature::~Creature() {
    cout << "Creature destructor called" << endl;
} 
//Defined the run mehtod 
void Creature::run() const{ 
    cout << "running " << distance << " meters!\n";
}  

//Made child class Wizard
class Wizard : public Creature {
	public:
        //Declared default constructor, destructor and hover method
		Wizard();
        ~Wizard();
		void hover() const;

	private:
        //Declared distFactor data member
		int distFactor;
};

//Defined the default constructor, destructor, and hover method
Wizard::Wizard() : distFactor(3) {
    cout << "Wizard constructor called" << endl;
}
Wizard::~Wizard() {
    cout << "Wizard destructor called" << endl;
}  
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Defined Knight class dervied from Creature class
class Knight : public Creature {
    public:
        //Declared default constructor, destructor and ride horse method
        Knight();
        ~Knight();
        void rideHorse() const; 
    private:
        //Declared horse factor data member
        int horseFactor;
};

//Defined default constructor, destructor, and ride horse method
Knight::Knight() : horseFactor(2) {
    cout << "Knight constructor called" << endl;
}
Knight::~Knight() {
    cout << "Knight destructor called" << endl;
}
void Knight::rideHorse() const {
    cout << "riding horse " << (horseFactor * distance) << " meters!\n";
}

//Made Dragon class dervied from Creature
class Dragon : public Creature {
    public:
        //Declared default constructor, destructor, and fly method
        Dragon();
        ~Dragon();
        void fly() const;
    private:
        //Declared fy factor
        double flyFactor;
};

//Defined the default constructor, destructor, and fly method
Dragon::Dragon() : flyFactor(4) {
    cout << "Dragon constructor called" << endl;
}
Dragon::~Dragon() {
    cout << "Dragon destructor called" << endl;
}
void Dragon::fly() const {
    cout << "flying "<< (flyFactor * distance) << " meters!\n";
}


int main()
{ 
    //Made an instance of creature
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    //Made an instance of Wizard creature
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //Made an instance of Knight creature
    cout << "\nCreating a Knight.\n";
    Knight k;
    k.run();
    k.rideHorse();

    //Made an instance of Dragon creature
    cout <<"\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.fly();
    return 0;
} 