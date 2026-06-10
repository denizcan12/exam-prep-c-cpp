/*
Exercise 7
Consider the following structure defining a node in a singly linked list where each node stores a single character:

C
typedef struct _node {
    char data;
    struct _node* next;
} node;
Write a recursive function:

C
#include <stdbool.h>

bool match_string(node const* head, char const* str);
that checks if the sequence of characters in the linked list exactly matches the given C-string str.

The function must return true if every character in the linked list matches the corresponding character in the string, and both have the exact same length. Otherwise, it returns false.

Note: * A C-string is terminated by the null character '\0'.

You cannot use any loop (for, while, do-while), standard library functions (like strlen or strcmp), or create any helper functions.
*/

#include <stdbool.h>
#include <stdlib.h>


typedef struct _node{
    char data;
    struct _node *next;

}node;

bool match_string(node const* head, char const* str){
    if(head == NULL && *str == '\0') return true;
    else if(head != NULL && *str == '\0') return false;
    else if (head == NULL && *str != '\0') return false;
    
    if(head->data == *(str)){
        return match_string(head->next, str + 1);
    }
    else{
        return false;
    }
}


