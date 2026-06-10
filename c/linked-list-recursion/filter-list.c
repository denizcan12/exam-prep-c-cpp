/*
Question: Filter List Write a function filter that, given two lists of integers, returns a new list obtained by eliminating the elements of the first list that are not included in the second list

Function Signature:
list_t * filter ( list_t *a, list_t *b );
Example: Given that list l1 contains {7, 1, 0, 3, 4, 1, 3} and list l2 contains {1, 3}, the function filter(l1, l2) should return a newly created list containing {1, 3, 1, 3}
. (Note: You do not need to modify the original lists, you must allocate a new list). 
*/
#include <stdlib.h>
#include <stdio.h>
// Struct definition from the exam question
typedef struct list {
    int data;
    struct list *next;
} list_t;

// Paste your own filter and is_in functions here.

list_t * filter ( list_t *first, list_t *second){

    list_t *head = NULL;
    list_t *tail = NULL;

    if(second == NULL){
            return NULL; 
        }

    
    if(first == NULL){
        return NULL; 
    }

    for (list_t *curr1 = first; curr1 != NULL; curr1 = curr1->next){
        for(list_t *curr2 = second; curr2 != NULL; curr2 = curr2->next){
            if (curr2->data == curr1->data){

                list_t *newlist = malloc(sizeof(list_t));
                newlist->data = curr2->data;
                newlist->next = NULL;

                if(head == NULL && tail == NULL){
                    head = newlist;
                    tail = newlist;
                    
                }

                else{
                    tail->next = newlist;
                    tail = newlist; 
                }
                 break;
            }
           
        }

    }
             return head;
}
   




// Helper function that appends a node so the list can be tested
void insert_at_end(list_t **root, int value) {
    list_t *new_node = malloc(sizeof(list_t));
    new_node->data = value;
    new_node->next = NULL;

    if (*root == NULL) {
        *root = new_node;
        return;
    }

    list_t *curr = *root;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new_node;
}

// Helper function for printing the list in a readable format
void print_list(list_t *root) {
    list_t *curr = root;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    list_t *l1 = NULL;
    list_t *l2 = NULL;

    // Build the l1 list from the exam example: {7, 1, 0, 3, 4, 1, 3}
    insert_at_end(&l1, 7);
    insert_at_end(&l1, 1);
    insert_at_end(&l1, 0);
    insert_at_end(&l1, 3);
    insert_at_end(&l1, 4);
    insert_at_end(&l1, 1);
    insert_at_end(&l1, 3);

    // Build the l2 list from the exam example: {1, 3}
    insert_at_end(&l2, 1);
    insert_at_end(&l2, 3);

    printf("Liste 1 (a): ");
    print_list(l1);

    printf("Liste 2 (b): ");
    print_list(l2);

    // Call the filter function written for the exercise
    list_t *result = filter(l1, l2);

    printf("Filtrelenmis Liste (Sonuc): ");
    print_list(result);

    // Not: In a real exam or project, after the work is finished 
    // l1, l2 ve result the lists should be cleaned up with the deallocate
    // function learned earlier.

    return 0;
}