//Question: Filter List
//Given two integer lists (a and b), write a function named filter that creates a new list from the elements of a that are not present in b, using newly allocated nodes, and returns the new head pointer.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct list {
    int data;
    struct list *next; /* next == NULL at the end of the list */
} list_t;

bool is_in(list_t *b, int x){
    if(b == NULL){
        return false;
    }

    list_t *curr = b;
    while(curr != NULL){
        if(curr->data == x){
            return true;
        }
        curr = curr->next;
    }
    return false; 
}

list_t * filter(list_t *a, list_t *b){

    if(a == NULL){
        return NULL;
    }

    list_t *head = NULL;
    list_t *tail = NULL;
    list_t *curr = a;

    while(curr != NULL){
        if(is_in(b, curr->data) == false){
            list_t *newlist = malloc(sizeof(list_t));
                newlist->next = NULL;
                newlist->data = curr->data;

                if(head == NULL && tail == NULL){
                    head = newlist;
                    tail = newlist;
                }
                else{

                    tail->next = newlist;
                    tail = tail->next;
                }
            }
             curr = curr->next;
        }
    
          return head; 
    }


// Helper function for printing the list (prepared for testing)
void print_list(list_t *l) {
    while (l != NULL) {
        printf("%d -> ", l->data);
        l = l->next;
    }
    printf("NULL\n");
}
// Helper function for easily creating test lists (prepared for testing)
list_t* create_list(int arr[], int n) {
    list_t *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        list_t *new_node = malloc(sizeof(list_t));
        new_node->data = arr[i];
        new_node->next = NULL;
        if (head == NULL) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    return head;
}

int main() {
    int arr1[] = {7, 1, 0, 3, 4, 1, 3};
    int arr2[] = {1, 3};

    list_t *l1 = create_list(arr1, 7);
    list_t *l2 = create_list(arr2, 2);

    printf("Liste 1 (Orijinal): ");
    print_list(l1);

    printf("Liste 2 (Filtre / Kara Liste): ");
    print_list(l2);

    // Call the filter function written for the exercise
    list_t *l3 = filter(l1, l2);

    printf("Filtrelenmis Yeni Liste: ");
    print_list(l3);

    return 0;
}