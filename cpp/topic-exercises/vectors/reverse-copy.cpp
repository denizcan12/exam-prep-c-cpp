/*
 * Exercise: Reverse a Vector
 *
 * Write a function that reverses the elements of a vector of integers
 * IN PLACE (i.e., without creating a new vector).
 *
 * Example:
 *   Input:  {1, 2, 3, 4, 5}
 *   Output: {5, 4, 3, 2, 1}
 *
 * Hint: swap elements from the two ends moving towards the centre.
 */

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& vec) {
    int left = 0;
    int right = vec.size() - 1;
    while (left < right) {
        int temp = vec.at(left);
        vec.at(left) = vec.at(right);
        vec.at(right) = temp;
        left++;
        right--;
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    reverse(vec);
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl; // Output: 5 4 3 2 1
    return 0;
}
