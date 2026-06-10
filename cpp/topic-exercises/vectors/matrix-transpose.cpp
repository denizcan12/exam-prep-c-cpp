/*
 * Exercise: Matrix Transpose
 *
 * Write a function that, given a square matrix (represented as a vector of
 * vectors of integers), returns its transpose.
 * The transpose swaps rows and columns: element at row i, column j
 * becomes the element at row j, column i.
 *
 * Example:
 *   Input:            Output:
 *   1 2 3             1 4 7
 *   4 5 6    --->     2 5 8
 *   7 8 9             3 6 9
 */

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> result(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result.at(j).at(i) = matrix.at(i).at(j);
        }
    }
    return result;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> result = transpose(matrix);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result.at(i).size(); j++) {
            cout << result.at(i).at(j) << " ";
        }
        cout << endl;
    }
    // Output:
    // 1 4 7
    // 2 5 8
    // 3 6 9
    return 0;
}
