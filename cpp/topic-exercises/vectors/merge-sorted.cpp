/*
 * Exercise: Merge Two Sorted Vectors
 *
 * Write a function that, given two vectors of integers that are each already
 * sorted in ascending order, returns a NEW vector containing all elements
 * of both vectors, also sorted in ascending order.
 *
 * Example:
 *   Input:  {1, 3, 5, 7}  and  {2, 4, 6, 8}
 *   Output: {1, 2, 3, 4, 5, 6, 7, 8}
 *
 * Hint: use two indices, one for each vector, and at each step pick the
 * smaller of the two current elements.
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_sorted(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a.at(i) <= b.at(j)) {
            result.push_back(a.at(i));
            i++;
        } else {
            result.push_back(b.at(j));
            j++;
        }
    }
    while (i < a.size()) {
        result.push_back(a.at(i));
        i++;
    }
    while (j < b.size()) {
        result.push_back(b.at(j));
        j++;
    }
    return result;
}

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};
    vector<int> result = merge_sorted(a, b);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl; // Output: 1 2 3 4 5 6 7 8
    return 0;
}
