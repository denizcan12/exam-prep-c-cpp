/*
Exercise 18 (8 pt.) - The Maximum Element
Write a recursive function:

C
int find_max(int* arr, int n);
that finds and returns the maximum element in an array arr of n integers.

CRITICAL RULES:

You cannot use any loop (for, while, do-while).

You cannot create any helper functions.

You must use pointer arithmetic to traverse the array.
*/

int find_max(int* arr, int n){
if (n == 1) return n; 
int biggest = (*arr);
int new = find_max(arr + 1, n - 1);

if (new > biggest){
    biggest = new; 
}
else{

}
return biggest; 

}
