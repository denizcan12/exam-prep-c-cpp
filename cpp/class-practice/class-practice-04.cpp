/*
Upgrade the Lamp class.

Tasks:
- remove the in-class initialization of isOn and brightness
- add a default constructor that sets the lamp to OFF and brightness to 0
- keep the other methods
- in main, create one Lamp object and test whether the constructor gives the correct initial state
*/

#include <iostream>
#include <string>

class Lamp {
private:
    bool isOn;
    int brightness;

public: 
    Lamp(){
    isOn = false;
    brightness = 0;

}
    void turnOn(){
        isOn = true;
    }

    void turnOff(){
        isOn = false;
    }

    void increaseBrightness(){
       if (brightness < 5 && isOn){
            brightness++;
        }
     }

    void printStatus() const{
        if (isOn){
            std::cout << "[LAMP] IS ON" << std::endl;
        }
        else {
            std::cout << "[LAMP] IS OFF" << std::endl;
        }

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