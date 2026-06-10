/*

Given an array A[0..size) of integer numbers, write a recursive function:

C
int count_occurrences(int const* A, int size, int target);
that counts and returns the number of times the integer target appears in the array A.

Note: You cannot use any loop (for, while, do-while) or create any helper functions in your solution.

*/

#include <stdlib.h>
#include <stdio.h>

int count_occurrences(int const* A, int size, int target){
    if(size == 0) return 0;

    int occurrance = 0;

    if(*A == target){
        occurrance ++;
    }

    return occurrance + count_occurrences(A + 1, size - 1, target);
}

