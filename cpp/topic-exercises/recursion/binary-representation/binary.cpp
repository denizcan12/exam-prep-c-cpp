/*
Exercise 8 — Binary Representation
Given a positive integer, write a recursive function that returns a string containing its
binary representation, with the most significant bit first.
Examples:
5 → "101"
8 → "1000"
1 → "1" 

*/

#include <iostream>
#include <string>

std::string stringBinary(const int a){
    if (a == 1) return "1";
    
    std::string hold = std::to_string(a % 2); 

    std::string temp = stringBinary(a/2); 
    
    return temp + hold;

}


int main(){
    int a{25}; 

    std::cout << stringBinary(a);


    return 0; 

}

