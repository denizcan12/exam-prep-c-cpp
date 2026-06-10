//Question: Reverse List. Write a function that takes a list and returns a newly allocated list containing the same elements in reverse order.
//Example:
// Orijinal liste l1: {1, 2, 3, 4} ise
//list_t * l2 = reverse(l1);
// l2 should look like this: {4, 3, 2, 1}
// Small hint: Unlike the earlier Unique List exercise where new nodes were appended to the tail, this exercise should insert each newly read node at the head of the new list.


#include <stdlib.h>
#include <stdio.h>

typedef struct list {
    int data;
    struct list *next; /* next == NULL at the end of the list */
} list_t;


void insertBeginning(list_t **list, int val){

    list_t *node = malloc(sizeof(list_t));
    node->data = val;
    node->next = NULL;

    node->next = *list;
    *list = node;

}


list_t * reverse(list_t *l){
    if (l == NULL || l->next == NULL){
        return l;
    }

    list_t *new_list = NULL;
    

    while (l != NULL){
        insertBeginning(&new_list, l->data);
        l = l->next;
    }
return new_list;
}

int main() {
    // 1. Manually build the original list: {1, 2, 3, 4}
    int test_degerleri[] = {1, 2, 3, 4};
    int n = 4;
    
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

    // 2. Print the original list
    printf("Orijinal Liste: ");
    list_t *curr = l1;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    // 3. Call the reverse function written for the exercise
    list_t *l2 = reverse(l1);

    // 4. Print the reversed list
    printf("Tersine Cevrilmis Liste: ");
    curr = l2;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

    return 0;
}