/*
Exam-level Exercise — Count Positive Recursively

Write:

    int count_positive_rec(const std::vector<int>& v, int index);

and a wrapper:

    int count_positive(const std::vector<int>& v);

The function must return how many positive elements are in the vector.

Rules:
- solve it recursively
- do not use loops inside count_positive_rec
- wrapper must start recursion from index 0

Examples:
- {1, -2, 3, 0, 4} -> 3
- {-1, -5, 0}      -> 0
- {}               -> 0
*/
#include <iostream>
#include <vector>

int count_positive_rec(const std::vector<int> &v, int a){
    if (a == v.size()) return 0;

    int count{};
    if (v.at(a) > 0){
        count++;
        return count + count_positive_rec(v, a + 1);
    }

    else {
        return count_positive_rec(v, a + 1);
    }

}

int count_positive(const std::vector<int> &v){
    return count_positive_rec(v, 0);
}

int main(){
    std::vector <int> hector {1, -6, 6, -7, 0, 10, -4};
    std::cout << count_positive(hector) << std::endl;
    return 0;
}