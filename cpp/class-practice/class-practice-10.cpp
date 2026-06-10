/*
Upgrade the Car class.

Tasks:
- keep the constructor
- add a destructor
- the destructor should print a message like "Car destroyed"
- keep printInfo()

In main:
- create one Car object
- print its info
- observe when the destructor message appears
*/


#include <string>
#include <iostream>

class Car{
    private:
    std::string brand;
    int year;

    public:
    Car(std::string brand, int year){
        this->brand = brand;
        this->year = year;
    }

    void setBrand(std::string brand){
        this->brand = brand;
    }

    void printInfo(){
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Year of car is: " << year << std::endl;
     }

     ~Car(){
        std::cout << "| Car Object Destroyed |" << std::endl;
     }

};

int main(){
    Car tuana_car("Mini cooper", 2026);
    tuana_car.printInfo();
    tuana_car.setBrand("Ferrari");
    tuana_car.printInfo();
    return 0;
}