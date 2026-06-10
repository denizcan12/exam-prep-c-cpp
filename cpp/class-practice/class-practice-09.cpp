/*
Create a small class called Car.

The class should contain:
- a private string brand
- a private int year

The class should have:
- a constructor that takes brand and year
- a setter called setBrand(string brand)
- a function printInfo()

Important:
- in both the constructor and the setter, use parameter names that are the same as the member names
- solve the naming conflict using this->

In main:
- create one Car object
- print it
- change the brand using setBrand()
- print it again
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

};

int main(){
    Car tuana_car("Mini cooper", 2026);
    tuana_car.printInfo();
    tuana_car.setBrand("Ferrari");
    tuana_car.printInfo();
    return 0;
}