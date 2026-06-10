/*
Exercise 8 (8 pt.)
Given an array A[0..n) of integer numbers, write a recursive function:

C
int count_inversions(int const* A, int n);
that computes the number of "inversions" in the array. An inversion is a pair of indices (i, j) such that i < j and A[i] > A[j]. In simple terms, it counts how many times a larger number appears before a smaller number in the array.

Note: * You are allowed to use one loop (for or while) inside the function to compare the current element with the rest of the array.

However, the primary traversal of the array must be recursive.

You cannot create any helper functions.
*/

#include <stdlib.h>

int count_inversions(int const *A, int n){
if(n == 0) return 0;

int count = 0;

for(int i = 1; i < n; i++){
    if(*A > A[i]) count++;
}

return count + count_inversions(A + 1, n - 1);
}