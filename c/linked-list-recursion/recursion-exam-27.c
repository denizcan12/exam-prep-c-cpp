/*
Exercise 20 (12 pt.) - The Selective Cloner
Consider the following structure defining a node in a singly linked list:
C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:
C
node* clone_even(node const* L);
that takes a linked list L and returns a completely new list (made of newly allocated nodes) that contains ONLY the even  elements from the list L, maintaining their original order.
CRITICAL RULES:
You must allocate new nodes using malloc() for the new list.
You cannot modify the original list L (notice the const keyword).
You cannot use any loop (for, while, do-while).
You cannot create any helper functions.
*/

#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;

node* clone_even(node const* L){
if(L == NULL )return NULL;

if((L->data % 2) == 0){

    node * head = malloc(sizeof(node));
    head->data = L->data;
    head->next = clone_even(L->next);
    return head;
}
else{
    return clone_even(L->next); 
}
}