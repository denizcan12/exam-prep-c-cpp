/*
 * Exercise: Convert to Lowercase
 *
 * Write a function that converts all uppercase letters of a string to
 * lowercase, modifying the string in place.
 *
 * Example:
 *   Input:  "Hello World"
 *   Output: "hello world"
 *
 * Hint: look at how the uppercase function is implemented in the lecture examples.
 */

#include <iostream>
#include <string>
using namespace std;

void lowercase(string& s) {
    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }
    }
}

int main() {
    string s = "Hello World";
    lowercase(s);
    cout << s << endl; // Output: hello world
    return 0;
}
