/*
 * Exercise: Remove Duplicates
 *
 * Write a function that, given a vector of integers, returns a NEW vector
 * with all duplicate elements removed. The first occurrence of each element
 * must be preserved, and the relative order of elements must not change.
 *
 * Example:
 *   Input:  {3, 1, 4, 1, 5, 3, 2, 4}
 *   Output: {3, 1, 4, 5, 2}
 *
 * Hint: for each element, check whether it already appeared earlier in the vector.
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> remove_duplicates(const vector<int>& vec) {
    vector<int> result;
    for (int i = 0; i < vec.size(); i++) {
        bool already_seen = false;
        for (int j = 0; j < result.size(); j++) {
            if (result.at(j) == vec.at(i)) {
                already_seen = true;
                break;
            }
        }
        if (!already_seen) {
            result.push_back(vec.at(i));
        }
    }
    return result;
}

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 3, 2, 4};
    vector<int> result = remove_duplicates(vec);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl; // Output: 3 1 4 5 2
    return 0;
}
