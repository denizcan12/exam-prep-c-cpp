/*
Question: Unique List Write a function that, given a list of integers, returns a new list (made of new nodes) containing only the distinct elements of the first list (in other words, removing the duplicates).
List Definition:

Example:
given that list l1 contains: {1, 1, 2, 3, 1, 2, 4, 4}
list_t * l2 = unique(l1);

l2 should contain: {1, 2, 3, 4} 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct list{
    int data;
    struct list *next;
}list_t;

//helper function
bool is_in(list_t *list, int x){
    if(list == NULL){
        return false;
    }

    while(list != NULL){
        if(list->data == x) return true;
        list = list->next;
    }
    return false; 
}


list_t * unique(list_t *l){

    if(l == NULL){
        return NULL;
    }

    list_t *head = NULL;
    list_t *tail = NULL;

    for(list_t *curr1 = l; curr1 != NULL; curr1 = curr1->next){

        

        if(head == NULL && tail == NULL){
            list_t *newlist = malloc(sizeof(list_t));
            newlist->data = curr1->data;
            newlist->next = NULL;
            head = newlist;
            tail = newlist;
        }

        if(is_in(head, curr1->data) == false){
            list_t *newlist = malloc(sizeof(list_t));
            newlist->data = curr1->data;
            newlist->next = NULL;
            tail->next = newlist;
            tail = newlist;
       }

    }
    return head;
}

int main() {
    // 1. Manually build the original list (l1): {1, 1, 2, 3, 1, 2, 4, 4}
    int test_degerleri[] = {1, 1, 2, 3, 1, 2, 4, 4};
    int n = 8;
    
    list_t *l1 = NULL;
    list_t *l1_tail = NULL;
    
    for (int i = 0; i < n; i++) {
        list_t *yeni_dugum = malloc(sizeof(list_t));
        yeni_dugum->data = test_degerleri[i];
        yeni_dugum->next = NULL;
        
        if (l1 == NULL) {
            l1 = yeni_dugum;
            l1_tail = yeni_dugum;
        } else {
            l1_tail->next = yeni_dugum;
            l1_tail = yeni_dugum;
        }
    }

    // 2. Call the unique function written for the exercise
    list_t *l2 = unique(l1);

    // 3. Print the filtered unique list
    printf("Benzersiz (Unique) Liste: ");
    list_t *curr = l2;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    return 0;
}