#include <stdlib.h>
#include <stdio.h>

int count_inversions(int const* A, int const n){
    if(n == 0) return 0;
    int count = 0;

    for(int a = 1; a<n; a++){
        if((*A) > A[a]){
            count++;
    
        }
    }
    return count + count_inversions(A + 1, n-1);
}