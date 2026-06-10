//Write a recursive function that finds the maximum element in an integer array A where size > 0.
//. Rule: do not use any loops (for or while).


//Example: A[] = {5, 2, 8, 1, 9, 4} and size = 6, the result should be 9

#include <stdlib.h>
#include <stdio.h>

int find_max(int const* A, int size){
    if(size == 1) return *A;

    int compare = *A; 
    int maxRest = find_max(A + 1, size-1);

    if(compare >= maxRest){
        return compare;
    }

    else{
        return maxRest;
    }

    
}