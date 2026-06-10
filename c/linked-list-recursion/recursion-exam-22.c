/*
Exercise 15 (15 pt.) - The Ruthless Purge
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
node* purge_weak_nodes(node* head);
that deletes nodes which have ANY node with a strictly greater value anywhere to their right side. The function must properly deallocate (free) the memory of the removed nodes and return the pointer to the head of the modified list.

CRITICAL RULES:

You are modifying the list in place.

You must use free() to deallocate the removed nodes.

You cannot use any loop (for, while, do-while).

You cannot create any helper functions.

You cannot allocate new nodes (malloc).
*/
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;


node* purge_weak_nodes(node* L1){
    if(L1 == NULL || L1->next == NULL) return L1;

    node * head = L1; 
    node * safe_l1 = L1->next;
    node * compare = purge_weak_nodes(safe_l1);

    if(head->data < compare->data){
        node *aux = head; 
        free(aux);
        return compare;
    }
    else{
        head->next = compare; 
        return head;
    }

}