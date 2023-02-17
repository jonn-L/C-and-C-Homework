/*
CH-230-A
a12 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<string>
#include<cstring>

#ifndef _TOURNAMENTMEMBER_H
#define _TOURNAMENTMEMBER_H

//Decare tournamentmember class
class TournamentMember {
    private:
        //Declare private variables
        char firstName[36];
        char lastName[36];
        char dob[36];
        int experience;
        float height;

        //Delcare static private member
        static std::string location;
    public:
        //Declare constructors and destructor
        TournamentMember();
        TournamentMember(const char [], const char [], const char[], 
                         int, float);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();

        //Define setters using inline
        inline void setFirstName(const char firstName[]) {
            strcpy(this->firstName, firstName);
        }
        inline void setLastName(const char lastName[]) {
            strcpy(this->lastName, lastName);
        }
        inline void setDOB(const char dob[]) {
            strcpy(this->dob, dob);
        }
        inline void setExperience(int experience) {
            this->experience = experience;
        }
        inline void setHeight(float height) {
            this->height = height;
        }
        //Here we also add the keyword static since location is a
        //static member
        inline static void setLocation(const std::string location) {
            TournamentMember::location = location;
        }
        
        //Define getters using inline
        inline char* getFirstName() {
            return firstName;
        }
        inline char* getLastName() {
            return lastName;
        }
        inline char* getDOB() {
            return dob;
        }
        inline int getExperience() {
            return experience;
        }
        inline float getHeight() {
            return height;
        }
        inline std::string getLocation() const {
            return location;
        }

        //Declare print method
        void printMember();
};

//Declare child class Player
class Player : public TournamentMember {
    private:
        //Private members
        int number;
        std::string position;
        int goals;
        bool isRightFoot;
    public:
        //Define the different constructors and destructor
        Player();
        Player(const char [], const char [], const char[], int, float, int,
               const std::string, int, bool);
        Player(Player&);
        ~Player();

        //Setter methods using inline
        inline void setNumber(int number) {
            this->number = number;
        }
        inline void setPosition(const std::string position) {
            this->position = position;
        }
        inline void setFoot(bool isRightFoot) {
            this->isRightFoot = isRightFoot;
        }

        //Getter methods using inline
        inline int getNumber() const {
            return number;
        };
        inline std::string getPosition() const {
            return position;
        }
        inline int getGoals() const {
            return goals;
        }
        inline bool getIsRightFoot() const {
            return isRightFoot;
        }

        //Define print and goal increment methods
        void printPlayer() const;
        void goalsIncrement();
};

#endif