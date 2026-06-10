/*
Problem 1 — Closest Sum

Given:
- a vector of integers
- an integer target

Write a function that returns the sum of the pair of elements
whose sum is closest to target.

If two pairs have the same distance from target,
return the larger sum.

Function signature:

    int closest2sum(const std::vector<int>& v, int target);

Example:
- if target = 10
- and a pair gives sum = 8
- and another pair gives sum = 12
both are at distance 2 from the target,
so return 12.
*/

#include <vector>
#include <iostream>
#include <cmath>

 int closest2sum(const std::vector<int>& v, int target){

    int result = v.at(0) + v.at(1);

    for (int i{}; i<v.size(); i++){
        for (int j = i + 1; j<v.size(); j++){
            if ((abs(v[i] + v[j] - target) < abs(result - target)) ||
                ((abs(v[i] + v[j] - target)) == (abs(result - target))) && (result < v.at(i) + v.at(j))){
                result = v[i] + v[j];
            }
            
        }
    }
    return result;
 }

 int main(){
    int targ{10};
    std::vector<int> vofnum{1, 5, 7};
    std::cout << closest2sum(vofnum, targ) << std::endl; 

    return 0;
 }
