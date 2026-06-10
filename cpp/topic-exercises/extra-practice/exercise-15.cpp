/*
Exercise 15 — Most Frequent Element

Write:

    int most_frequent(const std::vector<int>& v);

Return the element that appears the most.

Rules:
- use nested loops
- if the vector is empty, return 0
- if two values have the same frequency, return the larger one

Examples:
- {1,2,2,3,3} -> 3
- {4,4,1,1}   -> 4
- {}          -> 0
*/
#include <vector>
#include <iostream>
using namespace std;
int most_frequent(const vector<int>& v) {
    if (v.empty()) return 0;

    int best = 0;
    int best_val = v[0];

    for (int i = 0; i < v.size(); i++) {
        int count = 0;

        for (int j = 0; j < v.size(); j++) {
            if (v[i] == v[j]) {
                count++;
            }
        }

        if (count > best || (count == best && v[i] > best_val)) {
            best = count;
            best_val = v[i];
        }
    }

    return best_val;
}

int main(){
    vector<int> hector{1,2,3,4,5,5,6,6};
    cout << most_frequent(hector) << endl;
    return 0;
}