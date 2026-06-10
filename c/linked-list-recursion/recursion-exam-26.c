/*
Exercise 19 (6 pt.) - The Digit Counter
Write a recursive function:

C
int count_digits(int n);
that calculates and returns the number of digits in a given integer n. The function must correctly handle negative numbers as well as zero.

CRITICAL RULES:

You cannot use any loop (for, while, do-while).

You cannot create any helper functions.

You cannot use any standard library functions (e.g., sprintf, abs, log10 from <math.h> or <string.h>).
*/

int count_digits(int n){
if( n >= -9 && n <= 9) return 1;


return 1 + count_digits(n / 10);

}
