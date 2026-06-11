//Soru: Count Vector
//Scrivere una funzione ricorsiva che dati due array conteggi il numero di volte che il primo array appare nel secondo.
//Exercise: Given two arrays, write a recursive function that counts how many times the first array appears inside the second array.
//Example:
//int v1[] = {1, 3, 1};
//int v2[] = {1, 3, 1, 3, 1, 1, 3, 1, 7};

//printf("%d \n", count_array(v1, 3, v2, 9) );
//Expected output: 3  /* because v2 matches starting at positions 0, 2, and 5 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool is_equal(int *v1, int v1_size, int *v2, int v2_size){
    if(v1_size > v2_size) return false;

for(int i = 0; i < v1_size; i++){
    if(*(v2 + i) != *(v1 + i)){
        return false;
    }
}
return true;
}

int count_array( int *a, int a_size, int *b, int b_size ){
if(a_size > b_size) return 0;

int count = 0;

if(is_equal(a, a_size, b, b_size)){
    count++;
}

return count + count_array(a, a_size, b + 1, b_size - 1);
}