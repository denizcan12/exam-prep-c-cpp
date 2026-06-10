/*
 * Exercise: Filter Prime Numbers
 *
 * Write a function that, given a vector of integers, returns a NEW vector
 * containing only the prime elements, preserving their order.
 *
 * Example:
 *   Input:  {1, 2, 3, 4, 5, 6, 7, 8}
 *   Output: {2, 3, 5, 7}
 */

#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> filter_primes(const vector<int>& vec) {
    vector<int> result;
    for (int i = 0; i < vec.size(); i++) {
        if (is_prime(vec.at(i))) {
            result.push_back(vec.at(i));
        }
    }
    return result;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> primes = filter_primes(vec);
    for (int x : primes) {
        cout << x << " ";
    }
    cout << endl; // Output: 2 3 5 7
    return 0;
}
