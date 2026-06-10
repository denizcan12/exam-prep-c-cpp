/*
Exercise 2 — Remove Digits

Write a function:

    void remove_digits(std::string& s);

The function must remove all digit characters from the string.

Rules:
- modify the original string in-place
- do not create a second output string
- use loops / indexing
- do not use erase inside a loop for every character if you can avoid it

Examples:
- "a1b2c3"   -> "abc"
- "123abc"   -> "abc"
- "abc"      -> "abc"
- ""         -> ""
- "7a8b9"    -> "ab"

Hint:
- this is very similar to collapse_runs
- think about using one index to read and one index to write
*/

#include <iostream>
#include <string>

    void remove_digits(std::string &s){

        int j{};

        for (int i{}; i < s.size(); i++){

            if (s[i] < '0' || s[i] > '9'){
                s[j] = s[i];
                j++;
            }

        }
        s.resize(j);
    }

    int main(){
        std::string str {"143ejds5sa9J"};
        remove_digits(str);

        std::cout << str << std::endl;

        return 0;
    }