/*
2. Convert to Lowercase
Write a function that converts all uppercase letters of a string to
lowercase, modifying the string in place.
Example:
Input: "Hello World"
Output: "hello world"
Hint: look at how the uppercase function is implemented in the lecture examples.
*/

#include <iostream>
#include <vector>
#include <string>

void turn_lower(std::string &st){
    
    for (char &x : st){
    if ('A' <= x && 'Z' >= x){
        x = x + 32;

        }
    
    }
}

int main(){
    std::string block{"DeNeMe"};

    turn_lower(block);


     std::cout << block << " ";


    return 0;
}