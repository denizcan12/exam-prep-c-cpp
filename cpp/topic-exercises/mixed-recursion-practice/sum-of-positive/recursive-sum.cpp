/*
Problem 4 — Recursion ex. 1

Given a vector of integers, write a recursive function
that computes the sum of positive elements.

Write:

    int sum_positive_rec(const std::vector<int>& v, int index);

and a wrapper:

    int sum_positive(const std::vector<int>& v);

Rules:
- solve it recursively
- do not use loops inside sum_positive_rec
- start from index 0 in the wrapper
- if the current element is positive, include it
- otherwise skip it

Examples:
- {1, -2, 3, 4} -> 8
- {-1, -5, 0}   -> 0
- {}            -> 0
*/

#include <iostream>
#include <vector>
int sum_positive_rec(const std::vector<int>& v, int index);

int sum_of_positives(const std::vector<int> &v ){
    return sum_positive_rec(v, 0);
    }



int sum_positive_rec(const std::vector<int>& v, int index){
    if (index == v.size()) return 0;
    int sum{};
    
    if (v[index] >= 0){
        sum = sum + v[index] + sum_positive_rec(v, index + 1);
    }
    else return sum_positive_rec(v, index + 1);

    return sum;

}


int main(){
    std::vector <int> hector {1, 2, 3, 4, -1, 5};
    std::cout << sum_of_positives(hector) << std::endl;

    return 0;
}