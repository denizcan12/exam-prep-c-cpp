/*
Exam-style Exercise 1 — Count Greater Elements

Write a function:

    int count_greater(const std::vector<int>& v, int x);

The function must return how many elements in v are strictly greater than x.

Rules:
- use a loop
- do not modify the vector

Examples:
- {1, 5, 7, 2}, x = 4 -> 2
- {1, 2, 3}, x = 5    -> 0
- {}                  -> 0
*/

#include <iostream>
#include <vector>
using namespace std;

int count_greater(const vector<int> &v, int a){

int count = 0;

    for (int i{}; i < v.size(); i++){
        if (v[i] > a) {
            count++;
        }
    }
    return count;
}

int main(){

    vector<int> hector{1,2,3,4,5,6,7};

    cout << count_greater(hector, 5);

}