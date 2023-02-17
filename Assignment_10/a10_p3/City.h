/*
CH-230-A
a10 p3.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include <string>

//Define class City
class City {
    //Set the data members
    private:
        std::string cityName;
        int cityPopulation;
        std::string mayorName;
        double cityArea;

    //Set the setter and getter functions
    public:
        //Declaring the setter functions
        void setCityName(std::string &newcityname);
        void setCityPopulation(int newcitypopulation);
        void setMayorName(std::string &newmayorname);
        void setCityArea(double newcityarea);

        //Declaring the getter functions
        std::string getCityName();
        int getCityPopulation();
        std:: string getMayorName();
        double getCityArea();

        //Dclaring the print function
        void printCity();
};