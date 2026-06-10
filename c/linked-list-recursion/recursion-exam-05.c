
//E5 (8 pt) Write a recursive function int prod_digits(int n) that returns the product of the digits of a non-negative integer n.

//int c = prod_digits(4821);  // c'nin degeri 4x8x2x1 = 64 olmalidir

int prod_digits(int n){
    if((n / 10) < 10) return n;

    int temp = n % 10;

    return prod_digits(n / 10) * temp;



}