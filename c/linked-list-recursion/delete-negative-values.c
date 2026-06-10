/*Question: Remove Negatives Given a singly linked-list of numbers and a pointer head to its first element, write a function void remove_negatives(node** head) that removes the nodes containing negative numbers.
Node Definition:*/

/* Assume to fill the list with: -3 -> 1 -> 0 -> -11 -> 3 -> NULL */

/* The list will now be: 1 -> 0 -> 3 -> NULL */
#include <stdlib.h>
#include <stdio.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;


void remove_negatives(node** head){
    if(*head == NULL){
        return;
    }

    while(*head != NULL && (*head)->data < 0 ){
        node *aux = *head;
        *head = (*head)->next;
        free(aux);
    }

    node *curr = *head;
    while(curr != NULL){

    if(curr->next != NULL && curr->next->data < 0){
        node *aux = curr->next;
        curr->next = curr->next->next;
        free(aux);
    }
     else{
        curr = curr->next;
    }


    }
}


int main() {
    // 1. Manually build the original list: {-3, 1, 0, -11, 3}
    int test_degerleri[] = {-3, 1, 0, -11, 3};
    int n = 5;
    
    node* head = NULL;
    node* tail = NULL;
    
    for (int i = 0; i < n; i++) {
        node* yeni_dugum = malloc(sizeof(node));
        yeni_dugum->data = test_degerleri[i];
        yeni_dugum->next = NULL;
        
        if (head == NULL) {
            head = yeni_dugum;
            tail = yeni_dugum;
        } else {
            tail->next = yeni_dugum;
            tail = yeni_dugum;
        }
    }

    // 2. Print the original list
    printf("Orijinal Liste: ");
    node* curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    // 3. Call the function. NOTE: pass the address of the head pointer.
    remove_negatives(&head);

    // 4. Print the list after deleting negative values
    printf("Negatifler Silindikten Sonra: ");
    curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    return 0;
}