/*
Exercise 2 — Maximum of an Array
Given a vector with at least one element, write a recursive function that returns the
maximum value in the vector.
Examples:
{3, 7, 1, 9, 2} → 9
{-4, -1, -7} → -1
*/

/*
#include <iostream>
#include <vector>

int findMax(std::vector<int> temp) {
    if (temp.size() == 1) {
        return temp[0];
    }

    int first = temp[0];
    temp.erase(temp.begin());

    int maxRest = findMax(temp);

    return (first > maxRest) ? first : maxRest;
}
*/

#include <iostream>
#include <vector>

int findMaxRecursive(const std::vector<int>& arr, int index) {
    if (index == arr.size() - 1) {
        return arr[index];
    }

    int maxRest = findMaxRecursive(arr, index + 1);

    if (arr[index] > maxRest) {
        return arr[index];
    }

    return maxRest;
}

int main() {
    std::vector<int> numbers = {3, 9, 7, 1, -6, 4, 2};

    std::cout << "Maximum value: " << findMaxRecursive(numbers, 2) << std::endl;

    return 0;
}
