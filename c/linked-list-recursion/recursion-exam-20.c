/*
Exercise 13 (13 pt.) - The Great Merge
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
node* merge_sorted(node* L1, node* L2);
that takes two singly linked lists L1 and L2, both of which are already sorted in ascending order. The function must merge them into a single sorted linked list and return the pointer to the head of the newly merged list.

CRITICAL RULE: You are only allowed to rewire the next pointers of the existing nodes. You cannot change the data fields.

Note:

You cannot use any loop (for, while, do-while).

You cannot create any helper functions.

You cannot allocate new nodes (malloc) or delete nodes (free). You are only rewiring the existing lists into one.
*/

#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;

node* merge_sorted(node* L1, node* L2){
    if(L1 == NULL){
        return L2;
    }

    else if(L2 == NULL){
        return L1;
    }

    node* head = NULL;

    if(L1->data <= L2->data){
        head = L1;
        head->next = merge_sorted(L1->next, L2);
    }
    else{
        head = L2;
        head->next = merge_sorted(L1, L2->next);
    }

    return head; 
}
