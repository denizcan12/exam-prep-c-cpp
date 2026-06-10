/*
Exercise 12 (12 pt.) - The Grand Reversal
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
node* reverse_list(node* head);
that completely reverses the singly linked list and returns the pointer to the new head of the reversed list.

CRITICAL RULE: You are only allowed to rewire the next pointers. You cannot change the data fields.

Note:

You cannot use any loop (for, while, do-while).

You cannot create any helper functions.

You cannot allocate new nodes (malloc) or delete nodes (free). You are only rewiring the existing list.
*/

#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;

node* reverse_list(node* head){
    if(head == NULL || head->next == NULL) return head;

    node *new_head = head->next;
    node* newest_head = reverse_list(new_head);

    new_head->next = head;

    head->next = NULL;

    return newest_head;

}