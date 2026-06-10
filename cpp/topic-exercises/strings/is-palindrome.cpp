/*
 * Exercise: Palindrome Check
 *
 * Write a function that, given a string, returns true if the string is a
 * palindrome and false otherwise. The check must be case-insensitive, so
 * "Racecar" and "racecar" are both palindromes.
 *
 * A palindrome is a word that reads the same forwards and backwards.
 *
 * Examples:
 *   "racecar"  ->  true
 *   "Racecar"  ->  true
 *   "hello"    ->  false
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

bool is_palindrome(string s) {
    lowercase(s);
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        if (s.at(left) != s.at(right)) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    cout << is_palindrome("racecar") << endl; // Output: 1
    cout << is_palindrome("Racecar") << endl; // Output: 1
    cout << is_palindrome("hello")   << endl; // Output: 0
    return 0;
}
