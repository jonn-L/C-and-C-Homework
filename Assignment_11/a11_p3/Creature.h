/*
CH-230-A
a11 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/

//Split all the class declarations into header file
#ifndef _CREATURE_H
#define _CREATURE_H

//Declare parent class Creature
class Creature {
	public:
		Creature(); 
        ~Creature(); 
		void run() const;
	protected:
		int distance;
};

//Declare child class Wizard
class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;
	private:
		int distFactor;
};

//Declare child class Knight
class Knight : public Creature {
    public:
        Knight();
        ~Knight();
        void rideHorse() const; 
    private:
        int horseFactor;
};

//Declare child class Dragon
class Dragon : public Creature {
    public:
        Dragon();
        ~Dragon();
        void fly() const;
    private:
        double flyFactor;
};
#endif