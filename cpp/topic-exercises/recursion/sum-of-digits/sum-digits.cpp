/*
Exercise 3 — Sum of Digits
Given a non-negative integer, write a recursive function that computes the sum of its
digits.
Examples:
452 → 11 (4 + 5 + 2)
0 → 0
999 → 27
*/

#include <iostream>

unsigned int digitSum(const unsigned int &a){
    if (a  % 10 == a){
        return a;
    }
        int temp{}; 
        temp = a % 10; 

    return temp + digitSum(a / 10);
}

int main(){

    int x{456};
    std::cout << digitSum(x);
    return 0;
}