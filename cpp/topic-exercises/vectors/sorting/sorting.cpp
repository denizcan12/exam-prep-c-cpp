/*

4. Merge Two Sorted Vectors
Write a function that, given two vectors of integers that are each already
sorted in ascending order, returns a NEW vector containing all elements
of both vectors, also sorted in ascending order.
Example:
Input: {1, 3, 5, 7} and {2, 4, 6, 8}
Output: {1, 2, 3, 4, 5, 6, 7, 8}
Hint: use two indices, one for each vector, and at each step pick the
smaller of the two current elements.

*/
#include <iostream>
#include <vector>

std::vector <int> MergeSort(const std::vector <int>&v1, const std::vector <int>&v2){

    std::vector <int> output;
    output.reserve(v1.size() + v2.size());

    std::size_t i{};
    std::size_t j{};

    while(i < v1.size() && j < v2.size()) {
        if(v1[i] < v2[j]){
            output.push_back(v1[i]);
            i++;
        } else {
            output.push_back(v2[j]);
            j++;
        }
    }

    while(i < v1.size()) {
        output.push_back(v1[i]);
        i++;
    }

    while(j < v2.size()) {
        output.push_back(v2[j]);
        j++;
    }

    return output; 
}


int main(){

    std::vector <int>vector1{1, 3, 5, 7};
    std::vector <int>vector2{2, 4, 6, 8};

    for (int x : MergeSort(vector1, vector2)){
        std::cout << x << std::endl;
    }

    return 0;
}

































/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> MergeSort(const vector <int> &v1, const vector <int> &v2){

    vector <int> output_vector{}; 

    for(int x : v1){
        output_vector.push_back(x);
    }

    for(int x : v2){
        output_vector.push_back(x);
    }

    std::sort(output_vector.begin(), output_vector.end());

    return output_vector;


}

int main(){

    vector <int> vector1{7,9,3,1,5};

    vector <int> vector2{2,6,8,4,0};

    for(int x :MergeSort(vector1, vector2)){
        cout << x << endl;
    }



    
    

    return 0;
} */
