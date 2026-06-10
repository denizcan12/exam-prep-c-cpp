/*
Create a class called Box.

The class should contain:
- a private int width
- a private int height

The class should have:
1. a parameterized constructor
2. a copy constructor
3. an assignment operator
4. a function printInfo()

Rules:
- the copy constructor should print "Copy constructor called"
- the assignment operator should print "Assignment operator called"
- the assignment operator should use:
    if (this == &other)
- printInfo() should print width and height

In main:
- create one Box object
- create a second Box as a copy of the first one
- create a third Box with different values
- assign the first box to the third one
- print all objects
*/

#include <iostream>
#include <string>

class Box{
    private:
    int width;
    int height;

    public:
    Box(int w, int h){
        width = w;
        height = h;
    }
    Box(Box const &other){
        width = other.width;
        height = other.height;
        std::cout << "Copy constructor called." << std::endl;
    }
    Box &operator=(Box const &other){
        if (this == &other) return *this;
        width = other.width;
        height = other.height;
        std::cout << "Assignment operator called." << std::endl;
        return *this;
    }
    void printInfo()const{
        std::cout << "Height: " << height << std::endl;
        std::cout << "Width: " << width << std::endl;
    }
};

int main (){
    Box box1(50, 100);
    Box box2(box1);

    Box box3(250, 500);
    box3 = box1;

    box1.printInfo();
    box2.printInfo();
    box3.printInfo();
    return 0;
}