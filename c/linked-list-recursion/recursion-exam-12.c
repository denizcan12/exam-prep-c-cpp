/*
Exercise 5
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
int find_max(node const* head);
that finds and returns the maximum integer value present in the linked list.

Note: * You can assume that the linked list is never empty (i.e., head will never be NULL when the function is initially called).

You cannot use any loop (for, while, do-while) or create any helper functions.

You cannot use any additional data structure (like arrays) to store the values.
*/
#include <stdlib.h>


typedef struct _node{
    int data;
    struct _node *next;
} node;

int find_max(const node *head){

    if(head->next == NULL){
        return head->data;
    }

    int max_rest = find_max(head->next);

    if(head->data > max_rest){
        return max_rest = head->data;
    }
        else{
            return max_rest;
        }

}