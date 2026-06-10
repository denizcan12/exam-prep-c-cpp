#pragma once

class Car{
private:
    float fuel;
    float speed;
    int passengers;
public:
    Car(float amount);
    ~Car();
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers();
    void Dashboard();
};