/*
Exercise 3 — Insert into Sorted Vector

Write a function:

    void insert_sorted(std::vector<int>& v, int x);

The function must insert x into the correct position
so that the vector remains sorted in non-decreasing order.

Rules:
- the vector is already sorted
- do NOT use sort()
- modify the original vector
- use loops / indexing

Examples:
- {1, 3, 5}, x = 4  -> {1, 3, 4, 5}
- {1, 3, 5}, x = 0  -> {0, 1, 3, 5}
- {1, 3, 5}, x = 6  -> {1, 3, 5, 6}
- {}, x = 2         -> {2}

Hint:
- find the position where x should go
- make space in the vector
- shift elements to the right
- then place x in its position
*/


#include <iostream>
#include <vector>
using namespace std;

void place_x(vector<int>& v, int number) {
    int i = 0;

    while (i < v.size() && v.at(i) <= number) {
        i++;
    }

    v.insert(v.begin() + i, number);
}

int main(){
     vector<int> vec{1, 2, 3, 4, 5};

    place_x(vec, 6);

    for(int x : vec){
        cout << x << endl;
    }
    

    return 0;
}