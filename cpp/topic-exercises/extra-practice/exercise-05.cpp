/*
Exercise 5 — Simple Counter Class

Create a class called Counter.

The class should contain:
- a private int value

The class should have:
- a default constructor
- void increment()
- void decrement()
- int get_value() const

Rules:
- value must start from 0
- value must never go below 0
- decrement() should do nothing if value is already 0

Example:
Counter c;
c.increment();
c.increment();
c.decrement();
c.get_value();   // 1
*/

#include <iostream>

class Counter{
    private: 
    int value; 

    public:
    Counter(){
        value = 0; 
    }

    void increment(){
        value++;
    }

    void decrement(){
     if (value > 0)  value--;
    }

    int getValue()const{
        return value;
    }


};

int main(){
    Counter c1; 
    std::cout << c1.getValue() << std::endl;
    c1.decrement();
    c1.decrement();
    std::cout << c1.getValue() << std::endl;
    
    c1.increment();
    c1.increment();
    c1.increment();
    c1.increment();
    std::cout << c1.getValue() << std::endl;
    c1.decrement();
    c1.decrement();
    std::cout << c1.getValue() << std::endl;
    

    return 0;
}