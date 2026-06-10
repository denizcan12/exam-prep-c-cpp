/*
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
void print_reverse(node const* head);
that prints all the integers in the linked list in reverse order, separated by a space. If the list is empty, the function should do nothing (print nothing).

Note: You cannot use any loop (for, while, do-while), you cannot modify the linked list, and you cannot use any array or additional data structure to store the elements.
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct _node{
    int data;
    struct _node *next;
}node;

void print_reverse(node const* head){
    if(head == NULL) return;

  if(head->next != NULL)  print_reverse(head->next); //the if block is unecessary

printf("%d ", head->data);
}