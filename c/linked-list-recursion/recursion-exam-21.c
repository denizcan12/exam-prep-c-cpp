/*
Exercise 14 (14 pt.) - The Zipper Merge (Zipper Merge)
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
node* zipper_merge(node* L1, node* L2);
that takes two singly linked lists L1 and L2. The function must merge them by alternating their nodes (like a zipper) starting with the first node of L1, then the first node of L2, then the second node of L1, and so on. It must return the pointer to the head of the newly zipped list.

CRITICAL RULE: You are only allowed to rewire the next pointers of the existing nodes. You cannot change the data fields.

Note:

If one list is longer than the other, the remaining nodes of the longer list should simply be appended to the end of the zipped list.

You cannot use any loop (for, while, do-while).

You cannot create any helper functions.

You cannot allocate new nodes (malloc) or delete nodes (free). You are only rewiring.
*/

#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;

node* zipper_merge(node* L1, node* L2){
    if(L1 == NULL && L2 == NULL){
        return NULL;
    }

    if(L1 == NULL){
        return L2;
    }

    if(L2 == NULL){
        return L1;
    }

    node *head = NULL;
    head = L1; 
    node* safe_l1 = L1->next;
    head->next = L2;
    node* safe_l2 = L2->next;
    head->next->next = zipper_merge(safe_l1, safe_l2);
    
    return head; 
}