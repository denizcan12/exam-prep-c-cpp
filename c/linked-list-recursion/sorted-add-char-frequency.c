//Question: Sorted Add (first-24-25-with-solutions.pdf)
//Review the struct below for a linked-list node. The list keeps nodes sorted from left to right using this rule: node a is smaller than node b only if:
//a.letter < b.letter (letters are compared alphabetically first)
//or a.letter == b.letter and a.freq < b.freq (if letters match, compare frequencies).
//Using these criteria, write void sorted_add(node** head, char l, int f), which inserts a new node with n.letter = l and n.freq = f into the correct sorted position.


#include <stdio.h>
#include <stdlib.h>

typedef struct n {
    char letter;
    int freq;
    struct n* next;
} node;

void sorted_add(node** head, char l, int f) {
    // 1. STEP: Create the node only once
    node* n = (node*)malloc(sizeof(node));
    n->letter = l;
    n->freq = f;
    n->next = NULL;

    node* curr = *head; // named ptr in the exam solution
    node* prev = NULL;  
    
    // 2. STEP: Only move the pointers; the loop body stays empty
    while (curr != NULL && 
          (curr->letter < l || (curr->letter == l && curr->freq < f))) {
        prev = curr;
        curr = curr->next;
    }

    // 3. STEP: After the loop, connect the links in the right place
    if (prev == NULL) {
        // If the list is empty or the new node is smaller than every node, insert at the head
        n->next = *head;
        *head = n;
    } else {
        // Vagonu araya veya en sona ekleme
        prev->next = n;
        n->next = curr;
    }
}

// Helper function for printing the list
void print_list(node *head) {
    node *curr = head;
    while (curr != NULL) {
        printf("(%c,%d) -> ", curr->letter, curr->freq);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    node* head = NULL;

    // 1. Step: build the list
    sorted_add(&head, 'n', 3);
    sorted_add(&head, 'd', 3);
    sorted_add(&head, 'd', 8);
    sorted_add(&head, 'm', 0);
    sorted_add(&head, 'i', -2);

    printf("Liste 1. Asama: \n");
    print_list(head);
    // Beklenen Cikti: (d,3) -> (d,8) -> (i,-2) -> (m,0) -> (n,3) -> NULL

    // 2. Step: add new elements in the middle and at the head
    sorted_add(&head, 'l', 11);
    sorted_add(&head, 'd', -2);

    printf("Liste 2. Asama (Yeni eklemelerden sonra): \n");
    print_list(head);
    // Beklenen Cikti: (d,-2) -> (d,3) -> (d,8) -> (i,-2) -> (l,11) -> (m,0) -> (n,3) -> NULL

    return 0;
}
