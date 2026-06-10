/*
Exam-style Exercise 2 — Count Character

Write a function:

    int count_char(const std::string& s, char c);

Return how many times c appears in s.

Rules:
- use a loop
- do not modify the string

Examples:
- "banana", 'a' -> 3
- "hello", 'z'  -> 0
- ""            -> 0
*/

#include <iostream>
#include <string>
using namespace std;

int count_char(const string &s, char c){
int count{};
    for (int i{}; i < s.size(); i++){
        if (s[i] == c){
            count++;
        } 
    }
    return count; 
}

int main(){
    string defname{"banana"};
    char at = 'n';

    cout << count_char(defname, at) << endl;
    return 0;
}