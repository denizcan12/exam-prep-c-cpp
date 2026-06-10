/*
Create a class called Lamp.

The class should contain:
- a private bool variable that stores whether the lamp is on or off
- a private int variable that stores the brightness level

The class should have:
- a public function turnOn()
- a public function turnOff()
- a public function increaseBrightness()
- a public function printStatus()

Rules:
- if the lamp is off, increasing brightness should do nothing
- brightness should not go above 5
- printStatus() should print whether the lamp is ON or OFF and also print the brightness level
- in main, create one Lamp object and test the functions step by step
*/

#include <iostream>
#include <string>

class Lamp {
private:
    bool isOn = false; 
    int brightness{};

public: 
    void turnOn(){
        isOn = true;
    }

    void turnOff(){
        isOn = false;
    }

    void increaseBrightness(){
       if (brightness < 5 && isOn == true){
            brightness++;
        }
     }

    void printStatus() const{
        if (isOn == true){
            std::cout << "[LAMP] IS ON" << std::endl;
        }
        else std::cout << "[LAMP] IS OFF" << std::endl;

        std::cout <<"The brightness level is: "<< brightness << std::endl;
    }
};

int main(){

    Lamp deskLamp;
    deskLamp.printStatus();
    deskLamp.turnOn();
    deskLamp.printStatus();
    deskLamp.increaseBrightness();
    deskLamp.increaseBrightness();
    deskLamp.increaseBrightness();
    deskLamp.printStatus();
    deskLamp.turnOff();
    deskLamp.printStatus();
}