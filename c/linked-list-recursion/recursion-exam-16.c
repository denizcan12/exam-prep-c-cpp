/*
Exercise 9 (9 pt.)
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
node* clone_even(node const* head);
that takes a linked list head and returns a new linked list (made of newly allocated nodes) that contains only the even elements (data % 2 == 0) from the original list. The elements in the new list must appear in the same order as they did in the original list.

If the input list is empty, or if it contains no even numbers, the function must return NULL.

Note: * You must allocate new memory (using malloc) for the nodes of the new list.

You cannot use any loop (for, while, do-while).

You cannot create any helper functions.

You cannot modify the original list.
*/

typedef struct _node{
    int data;
    struct _node *next;
}node;

node * clone_even(node const *head){
    
}