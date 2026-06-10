#include "car.h"
#include <iostream>

Car::Car(float amount)
{
    std::cout << "Parameterized Car() ";
    fuel = amount;
    speed = 0;
    passengers = 0;
}

Car::~Car()
{
    std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(float amount)
{
    fuel = amount;
}

void Car::Accelerate()
{
    speed++;
    fuel--;
}

void Car::Brake()
{
    speed = 0;
}

void Car::AddPassengers()
{
 ++passengers;
}

void Car::Dashboard()
{
 std::cout << "Your fuel is: " << fuel << std::endl;
 std::cout << "Your speed is: " << speed << std::endl;
 std::cout << "Amount of passanger in the car is: " << passengers << std::endl;
}
