/*
Given an array A[0..size) of integer numbers, write a recursive function:

C
#include <stdbool.h>

bool is_palindrome(int const* A, int size);
that checks whether the array is a palindrome. An array is considered a palindrome if it reads the same forwards and backwards.

If the array is empty (size is 0) or has only one element (size is 1), it is considered a palindrome by definition and the function should return true. Otherwise, it returns true if it is a palindrome, and false if it is not.

Note: You cannot use any loop (for, while, do-while) or create any helper functions in your solution.
*/

#include <stdlib.h>
#include <stdbool.h>

bool is_palindrome(int const* A, int size){
if(size <= 1) return true;

if(*A == *(A + (size - 1))){
    return is_palindrome(A + 1, size - 2);
}
else{
    return false;
}

}
