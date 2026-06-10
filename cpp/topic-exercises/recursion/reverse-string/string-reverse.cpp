/*
Exercise 6 — Reverse a String (copy)
Given a string, write a recursive function that returns a new string with the characters in
reverse order.
Examples:
"h e l l o" → "olleh"
"abc" → "cba"
"a" → "a"
*/
#include <iostream>
#include <vector> // unneeded
#include <string>

std::string orderReverse(const std::string &str){
    if (str.size() <= 1) return str;

    std::string temp = str.substr(1); 
    char store = *str.begin(); // *str.begin() yerine --> str[0] veya str.at(0);
    temp = orderReverse(temp);
    temp.push_back(store);

    return temp;

}

int main(){
    std::string text{"araba"};
    
    std::cout << orderReverse(text) << std::endl;
    

    return 0;
}