//Given a singly linked-list of numbers and a pointer head to its first element, write a function void remove_negatives(node** head) that removes the nodes containing negative numbers. Assume node is the following struct
typedef struct _node {
    int data;
    struct _node* next;
} node;

/*
Assume to fill the list with: -3 -> 1 -> 0 -> -11 -> 3 -> NULL
*/
//remove_negatives(&head);
/*
The list will now be: 1 -> 0 -> 3 -> NULL
*/
#include <stdlib.h>
#include <stdio.h>

void remove_negatives(node **head){
    if((*head) == NULL) return; 

    while(*head != NULL && (*head)->data < 0){
       node *aux = *head;
       *head = (*head)->next;
       free(aux);

    }
    
    node *curr = *head;
    if(curr == NULL)return;

    while(curr->next != NULL){
        if(curr->next->data < 0){
            node* aux = curr->next; 
            curr->next = curr->next->next; //the next pointer handling here may be wrong
            free(aux);
        }
        else{
        curr = curr->next;
        }
    }

    }