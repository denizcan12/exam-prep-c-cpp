/*
Exercise 4 — Count Even Numbers Recursively

Write:

    int count_even_rec(const std::vector<int>& v, int index);

and a wrapper:

    int count_even(const std::vector<int>& v);

The function must return how many even numbers are in the vector.

Rules:
- solve it recursively
- do not use loops inside count_even_rec
- the wrapper must start from index 0

Examples:
- {1, 2, 3, 4} -> 2
- {2, 4, 6}    -> 3
- {1, 3, 5}    -> 0
- {}           -> 0
*/

#include <iostream>
#include <vector>

  int count_even_rec(const std::vector<int>& v, int index){
    if (index == v.size()) return 0; 
   
    int count{};

    if (v.at(index) % 2 == 0){
        count ++;
        return count + count_even_rec(v, index + 1);
    }

    else {
         return count_even_rec(v, index + 1);
    }
    
    return count; 
  }

    int count_even(const std::vector<int>& v){
        return count_even_rec(v, 0);

}

int main(){
    std::vector<int> hector {1,2,3,4};
    
    std::cout << count_even(hector) << std::endl; 

    return 0;
}