/*
Exercise 16: The Chain Reaction

Write a recursive function that traverses a linked list. If two adjacent nodes
have the same value, merge them into a single node whose value is doubled and
free the duplicate node. After a merge, continue checking from the same node so
chain reactions are handled.
*/
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;

node* implode_equals(node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    if (head->data == head->next->data) {
        node* duplicate = head->next;
        
        head->data = head->data * 2;
        head->next = duplicate->next;
        
        free(duplicate);

        return implode_equals(head); 
    } 
    else {
        head->next = implode_equals(head->next);
        return head;
    }
}
