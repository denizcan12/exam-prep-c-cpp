/*
Given an array A[0..size) of integer numbers, write a recursive function:

C
int sum_positive(int const* A, int size);
that computes the sum of all strictly positive integers in the array A. If the array is empty (size is 0) or contains no positive integers, the function must return 0.

Note: You cannot use any loop (for, while, do-while) in your solution.
*/

#include <stdlib.h>


int sum_positive(int const* A, int size){
if (size == 0) return 0;

int sum = 0;

if (*(A) > 0 ){
    sum = sum + *(A);
}

return sum_positive(A + 1, size - 1) + sum;
}