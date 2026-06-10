//Soru: Clone Even (7 pt) //recursionlardan sonra tekrar linked list

 //A node structure is defined as below:
typedef struct n { 
    int data; 
    struct n* next; /* listenin sonunda next == NULL olur */
} node;
//Write clone_even, which returns a newly allocated linked list containing only the even values from L while preserving their original order.
//Example: Suppose list L is: 2 -> 3 -> 8 -> 7 -> 6 -> 2 -> 1 -> NULL The returned list E should be: 2 -> 8 -> 6 -> 2 -> NUL

#include <stdlib.h>
#include <stdio.h>

node* clone_even(node const* L){

  node *head = NULL;
  node *tail = NULL;

    node *curr = L;

    while(curr != NULL){


        if(curr->data % 2 == 0){
        node * new_node = malloc(sizeof(node));
        new_node->next = NULL;

            if(head == NULL && tail == NULL){
                head = new_node;
                tail = new_node;
                new_node->data = curr->data;
            }
        else{
            tail->next = new_node;
            tail = new_node; 
            new_node->data = curr->data;
        }

        }
        curr = curr->next;
    }

return head; 
}
