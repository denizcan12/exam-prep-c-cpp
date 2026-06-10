/*
Exercise 11 — Subset Sum
Write a recursive function that determines whether any subset of a vector of integers
sums to a given target.
Examples:
{3, 1, 4, 2}, target = 6 → true (3+1+2 or 4+2)
{3, 1, 4, 2}, target = 11 → false
{}, target = 0 → true (empty subset)

*/

#include <iostream>
#include <vector>
using namespace std;

bool sumset(const vector <int> &set, const int target){
    int subsetCount = 1 << set.size();

    for (int mask = 0; mask < subsetCount; mask++) {
        int sum = 0;

        for (int i = 0; i < set.size(); i++) {
            if (mask & (1 << i)) {
                sum += set[i];
            }
        }

        if (sum == target) {
            return true;
        }
    }

    return false;
}

int main(){
    int a = 6;
    vector<int> deneme = {1,2,3,4}; 

    cout << sumset(deneme, a);
    
    return 0;
}
