/*
Write a function that, given a vector of integers, returns a NEW vector
with all duplicate elements removed. The first occurrence of each element
must be preserved, and the relative order of elements must not change.
Example:
Input: {3, 1, 4, 1, 5, 3, 2, 4}
Output: {3, 1, 4, 5, 2}
Hint: for each element, check whether it already appeared earlier in the vector.
*/

#include <vector>
#include <iostream>

std::vector <int>dupe_remove(const std::vector <int> &vec){
std::vector <int> new_vector;
    

        for (int i = 0; i < vec.size(); i++){
            bool found = false;

            for (int j = 0; j < i; j++) {
            if (vec[i] == vec[j]){
                found = true;
                break;
            }
        }
        if(!found) {
            new_vector.push_back(vec[i]);
        }

    }
 return new_vector;

}



int main(){

    std::vector <int> vector{3, 1, 4, 1, 5, 3, 2, 4};

    for (int x : dupe_remove(vector)){
        std::cout << x << std::endl;
    }


    return 0;
}