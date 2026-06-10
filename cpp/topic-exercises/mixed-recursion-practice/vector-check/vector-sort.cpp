/*
Problem 3 — Check if vector is sorted

Write a function:

    bool is_sorted(const std::vector<int>& v);

Return true if the vector is sorted in non-decreasing order.

Rules:
- you must NOT modify the vector
- use a loop

Examples:
- {1, 2, 3, 4} -> true
- {1, 1, 2, 2} -> true
- {1, 3, 2}    -> false
- {}           -> true
- {5}          -> true
*/

#include <vector>
#include <iostream>

bool is_sorted(const std::vector<int> &v){
    if (v.empty()) return true;

    int j{};
    for (int i = 1; i < v.size(); i++){
        if (v[j] > v[i]){
        return false;
        }
        j++;
}
    return true;
}

int main(){
    std::vector <int> hector {1, 2, 3, 4, 5};
    std::cout << is_sorted(hector) << std::endl;

    return 0;
}