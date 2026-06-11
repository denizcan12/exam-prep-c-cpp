// E5 (8 pt)
// Write a recursive function comb that returns the number of subsets of A
// with exactly len elements whose sum is equal to target.
// Array elements do not need to be consecutive.
//
// Example:
// int A[] = { 10, 10, 20, 5, 15 };
// int target = 40;
// int len = 3;
// printf("%d\n", comb(A, 5, len, target));
// Expected output: 2

#include <stdlib.h>
#include <stdio.h>

int comb(int *A, int A_size, int len, int target){
    if(target == 0 && len == 0) return 1;

    if(A_size == 0 || len == 0) return 0;

    return comb(A + 1, A_size - 1, len, target) + comb(A + 1, A_size - 1, len - 1, target - *A);
}
