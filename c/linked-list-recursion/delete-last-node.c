//New linked-list exercise: delete negative values using prev and curr instead of only ->next.
//Question: Delete Last Node
//Given the head pointer of an integer linked list, write void delete_last(node** head), which deletes the final node, frees it, and updates the list without breaking the links.

//If the list is empty, the function should return safely without doing anything.

//If the list has one element, delete it and update the head pointer to NULL.

//Node Definition:
#include <stdlib.h>
#include <stdio.h>

typedef struct _node {
    int data;
    struct _node *next;
} node;

void delete_last(node **head){
    if(*head == NULL){
        return;
    }

    if((*head)->next == NULL){
        node *aux = *head;
        free(aux); //I'm aware this leaves a dangling pointer but I'm not syntatically sure how to deal with it
        *head = NULL;
        return;
    }
    node *prev = NULL;
    node *curr = *head;

    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }
    node *aux = curr;
    free(aux);
    prev->next = NULL;

}


int main() {
    // 1. Manually build the original list: {5, 12, -4, -21, 33}
    int test_degerleri[] = {5, 12, -4, -21, 33};
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

    // 3. Delete the last element
    delete_last(&head);

    // 4. Print the list after deletion
    printf("Silinmis Liste: ");
    curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    return 0;
}