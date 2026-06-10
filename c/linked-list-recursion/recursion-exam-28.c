/*
Exercise 21 (10 pt.) - The Spaced Palindrome
A string is a palindrome if it reads the same forward and backward (e.g., "kayak", "radar").
Write a recursive function:

C
int is_palindrome(char const* s);
that checks whether the string s is a palindrome, ignoring all space characters (' '). The function must return 1 if the string is a spaced palindrome, and 0 otherwise.

CRITICAL RULES:

You cannot use any loop (for, while, do-while).

You are allowed to use <string.h> (specifically, strlen) ONLY ONCE, and it must be inside your main is_palindrome function.

You MUST create exactly one helper function (which must also be recursive).
*/

#include <stdlib.h>
#include <string.h>

int is_palindrome_helper(char const* s, int left, int right){
if(left >= right) return 1;

if(s[left] == ' ') return is_palindrome_helper(s, left + 1, right);

if(s[right] == ' ')return is_palindrome_helper(s, left, right - 1); 
    
if(*(s + left) != *(s + right)) return 0;
else{
    return is_palindrome_helper(s, left + 1, right - 1);
}

}

int is_palindrome(char const* s){
    int right = strlen(s) - 1;
    int left = 0; 
    return is_palindrome_helper(s, left, right);
    
}