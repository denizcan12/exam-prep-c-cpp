/*
Exam-level Exercise — Closest Pair Sum

Write:

    int closest2sum(const std::vector<int>& v, int target);

Return the sum of two distinct elements whose sum is closest to target.

Rules:
- use two loops
- use abs()
- if equal distance → return larger sum

Example:
- {2, 8, 10, 12}, target=10 → 12
*/

#include <iostream>
#include <vector>
#include <cmath>

int closest2sum(const std::vector <int> &v, int target){

int best_sum = v[0] + v[1];

 for(int i = 0; i < v.size(); i++){
    for(int j = i + 1; j < v.size(); j++){
        if (abs(best_sum - target) > abs(v[i] + v[j] - target) || abs(v[i] + v[j] - target) == abs(best_sum - target) && (v[i] + v[j] > best_sum)){
            best_sum = v[i] + v[j];
            }
         }
    }
    return best_sum;
 }


int main(){
    std::vector <int> intvec{1,2,3,4,5};
    int a{9};

    std::cout << closest2sum(intvec, a) << std::endl;

    return 0;
}