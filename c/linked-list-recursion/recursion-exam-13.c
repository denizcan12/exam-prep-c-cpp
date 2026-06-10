/*
Exercise 6
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
#include <stdbool.h>

bool is_strictly_ascending(node const* head);
that checks whether the elements in the linked list are sorted in strictly ascending order (each element must be strictly greater than the previous one).

If the list is empty or contains only one node, it is considered strictly ascending by definition, and the function should return true. Otherwise, it returns true if it is strictly ascending, and false if it is not.

Note: You cannot use any loop (for, while, do-while) or create any helper functions.
*/

#include <stdbool.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node *next;
}node;


bool is_strictly_ascending(node const *head){
if(head == NULL || head->next == NULL) return true;

if(head->data < head->next->data){
    return is_strictly_ascending(head->next);
}
else{
    return false;
}


}