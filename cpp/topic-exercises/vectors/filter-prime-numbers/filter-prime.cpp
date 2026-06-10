/*
Filter Prime Numbers
Write a function that, given a vector of integers, returns a NEW vector
containing only the prime elements, preserving their order.
Example:
Input: {1, 2, 3, 4, 5, 6, 7, 8}
Output: {2, 3, 5, 7}
*/

#include <vector>
#include <iostream>

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= n / i; i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

void filter_prime(const std::vector<int>& src, std::vector<int>& dst) {
    dst.clear();
    // dst.reserve(src.size()); // optional; reduces unnecessary reallocations

    for (int x : src) {
        if (is_prime(x)) {
            dst.push_back(x);
        }
    }
}

int main() {
    std::vector<int> new_vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> empty_vec;
    filter_prime(new_vec, empty_vec);

    for (int x : empty_vec) {
        std::cout << x << '\n';
    }

    return 0;
}
