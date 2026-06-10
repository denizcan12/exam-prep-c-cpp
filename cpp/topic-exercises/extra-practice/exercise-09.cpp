/*
Exam-style Exercise 3 — First Position of Character

Write a function:

    int first_pos(const std::string& s, char c);

Return the index of the first occurrence of c in s.
If c does not appear, return -1.

Rules:
- use a loop
- do not modify the string

Examples:
- "banana", 'a' -> 1
- "hello", 'l'  -> 2
- "hello", 'z'  -> -1
- ""            -> -1
*/

#include <iostream>
#include <string>
using namespace std;

int first_pos(const string& s, char c){

    for(int i{}; i < s.size(); i++){
        if (s[i] == c) {
        return i + 1;}
    }
   return -1; 
}

int main(){
    string str{"Example"};
    char character {'m'};
    cout << first_pos(str, character) << endl;

    return 0; 
}