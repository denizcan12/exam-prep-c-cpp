/*
Given a vector that contains at least two integers (positive, negative, or zero), write a function that returns the largest element.
For example, if the vector is:
2, 5, 3, -4, 1, 20, 10, 3, 0, 90
the answer will be 90.
*/

#include <iostream>
#include <vector>
using namespace std;

int CompareVector(const vector<int> &v){
    const int *wander = &v[0];
    int result = v[0];
    int &r = result;

        for (size_t i{}; i < v.size(); i++){ //size_t is an unsigned type commonly used for sizes and indexes; it is safer for comparisons with v.size().
            if (r < wander[i]){
                r = wander[i];
            }

        }
        return r;
}


int main(){
    vector <int>name{1, 5, 66, -76, 99, 2};

    cout << CompareVector(name) << endl;


    return 0;
}