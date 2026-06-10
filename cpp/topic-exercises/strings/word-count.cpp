/*
 * Exercise: Word Count
 *
 * Write a function that, given a string, returns the number of words it
 * contains. Words are separated by spaces. You can assume there are no
 * leading, trailing, or consecutive spaces.
 *
 * Example:
 *   Input:  "the quick brown fox"
 *   Output: 4
 */

#include <iostream>
#include <string>
using namespace std;

int word_count(const string& s) {
    if (s.size() == 0) {
        return 0;
    }
    int count = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    string s = "the quick brown fox";
    cout << "Words: " << word_count(s) << endl; // Output: Words: 4
    return 0;
}
