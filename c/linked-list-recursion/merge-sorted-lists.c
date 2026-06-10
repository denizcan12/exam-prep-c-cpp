//Given two different linked lists (a and b) sorted in ascending order, write a function named merge that builds a new sorted list using newly allocated nodes. If a value appears multiple times, the duplicates should be preserved.
//Node Definition:

//Function Signature:
//Example:
/* a listesi: 1 -> 2 -> 3 -> 4 -> 5 -> NULL */
/* b listesi: 1 -> 2 -> 7 -> 9 -> NULL */

//list_t *c = merge(a, b);

/* the c list should look like this: 
   1 -> 1 -> 2 -> 2 -> 3 -> 4 -> 5 -> 7 -> 9 -> NULL */

   #include <stdlib.h>
   #include <stdio.h>

   typedef struct list {
    int data;
    struct list *next;
} list_t;

list_t * merge( list_t *a, list_t *b ){

    list_t *curr1 = a;
    list_t *curr2 = b;
    list_t *smaller = NULL;
    list_t *head = NULL;
    list_t *tail = NULL;
    
    while(curr1 != NULL || curr2 != NULL){

        if(curr1 != NULL && curr2 == NULL){
            smaller = curr1;
        }

        else if(curr2 != NULL && curr1 == NULL){
            smaller = curr2;
        }

        else if(curr1->data <= curr2->data){
            smaller = curr1;
        }

        else if(curr2->data <= curr1->data){
            smaller = curr2;
        }

       
        list_t *new_node = malloc(sizeof(list_t));
        new_node->data = smaller->data; // whoever wins, gets the space automatically
        new_node->next = NULL;

        if(head == NULL && tail == NULL){
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }

        if(smaller == curr1){
            curr1 = curr1->next;
        } else {
            curr2 = curr2->next;
        }

    }
    return head; 
}
        
/*
        if(smaller == curr1){
            list_t *new_node = malloc(sizeof(list_t));
            new_node->data = curr1->data;
            new_node->next = NULL;
            if(head == NULL && tail == NULL){
                head = new_node;
                tail = new_node;
            }

            else{
                tail->next = new_node;
                tail = new_node;
            }
            curr1 = curr1->next;
        }

        else if(smaller == curr2){
            list_t *new_node = malloc(sizeof(list_t));
            new_node->data = curr2->data;
            new_node->next = NULL;
            if(head == NULL && tail == NULL){
                head = new_node;
                tail = new_node;
            }

            else{
                tail->next = new_node;
                tail = new_node;
            }
            curr2 = curr2->next;
        }

    }
    return head;
    }*/