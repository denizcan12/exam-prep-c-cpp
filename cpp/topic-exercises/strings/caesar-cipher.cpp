/*
 * Exercise: Caesar Cipher
 *
 * Write a function that, given a string and an integer shift, returns a NEW
 * string where every letter has been shifted forward by that many positions
 * in the alphabet. Non-letter characters must be left unchanged.
 * The shift wraps around: shifting 'z' by 1 gives 'a'.
 * The case of each letter must be preserved.
 *
 * Examples (shift = 3):
 *   "Hello, World!"  ->  "Khoor, Zruog!"
 *   "xyz"            ->  "abc"
 */

#include <iostream>
#include <string>
using namespace std;

string caesar_cipher(const string& s, int shift) {
    string result = s;
    for (int i = 0; i < result.size(); i++) {
        char c = result.at(i);
        if (c >= 'a' && c <= 'z') {
            result.at(i) = 'a' + (c - 'a' + shift) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            result.at(i) = 'A' + (c - 'A' + shift) % 26;
        }
    }
    return result;
}

int main() {
    cout << caesar_cipher("Hello, World!", 3) << endl; // Output: Khoor, Zruog!
    cout << caesar_cipher("xyz", 3)           << endl; // Output: abc
    return 0;
}
