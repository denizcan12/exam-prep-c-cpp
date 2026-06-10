/*
 * Exercise: Count Vowels
 *
 * Write a function that, given a string, returns the number of vowels
 * (a, e, i, o, u — both lowercase and uppercase) it contains.
 *
 * Example:
 *   Input:  "Hello World"
 *   Output: 3   (e, o, o)
 */

#include <iostream>
#include <string>
using namespace std;

bool is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int count_vowels(const string& s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (is_vowel(s.at(i))) {
            count++;
        }
    }
    return count;
}

int main() {
    string s = "Hello World";
    cout << "Vowels: " << count_vowels(s) << endl; // Output: Vowels: 3
    return 0;
}
