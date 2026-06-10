//Question: Insert Sorted. Write a function that inserts a new value into a linked list whose elements are already sorted in ascending order. The function should return the new head of the list. If the list is initially empty, the inserted node becomes the list.


//Example:

// The resulting list should be sorted in ascending order: 
// 1 -> 2 -> 3 -> 5 -> 8 -> NULL

#include <stdlib.h>
#include <stdio.h>

typedef struct _node {
    int data;
    struct _node *next;
}node;


node* insert_sorted(node *head, int value){
    if(head == NULL){
    node *empty = malloc(sizeof(node));
    empty->data = value;
    empty->next = NULL;
        return empty;
    }

    if(head->data >= value){
        node *new_node = malloc(sizeof(node));
        new_node->data = value; 
        new_node->next = NULL;

        new_node->next = head;
        head = new_node;
        return head;
    }
    node *curr = head;
    while(curr->next != NULL){
        if(curr->next != NULL && curr->next->data >= value){
            node *new_node = malloc(sizeof(node));
            new_node->next = NULL;
            new_node->data = value;

            new_node->next = curr->next;
            curr->next = new_node;
             
            return head; 
        }
        curr = curr->next;
    }
   
        node *new_node = malloc(sizeof(node));
        new_node->data = value;
        new_node->next = NULL;
        
        curr->next = new_node;
        curr = curr->next;
        return head;
}

int main() {
    node* head = NULL;

    // Build the list in order by calling the function
    head = insert_sorted(head, 5);
    head = insert_sorted(head, 1);
    head = insert_sorted(head, 3);
    head = insert_sorted(head, 8);
    head = insert_sorted(head, 2);

    // Print the sorted list
    printf("Sirali Liste: ");
    node* curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    return 0;
}