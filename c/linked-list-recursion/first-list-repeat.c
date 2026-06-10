#include <stdlib.h>
#include <stdio.h>

struct Node{
    int a;
    struct Node *next;
};

typedef struct Node type_node;
void insert_beginning(type_node **root, const int b){
    type_node *new_node = malloc(sizeof(type_node));
    if (new_node == NULL) exit(100);

    new_node->a = b;
    new_node->next = *root;
    *root = new_node; 
}
void insert_end(type_node **root, const int b){
    type_node *new_node = malloc(sizeof(type_node));
    if(new_node == NULL){
        exit(1);
    }
    new_node->a = b;
    new_node->next = NULL;
    type_node *curr = *root;
    if(curr == NULL){
        *root = new_node;
        return; 
    }
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = new_node;
}
void freeList(type_node **root){
    type_node *curr = *root; 
    while(curr != NULL){
        type_node *aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}
void freeListRecursion(type_node *root){
    if (root == NULL){
        return;
    } 

    freeListRecursion(root->next);
    free(root);    
}
void insertAfter(type_node *root, const int value){
    type_node *new_node = malloc(sizeof(type_node));
    if (new_node == NULL){
        exit(10);
    }

    new_node->a = value;
    new_node->next = root->next;
    root->next = new_node;
    
}
void insertSorted(type_node **root, const int value){
    if (*root == NULL || (*root)->a >= value){
        insert_beginning(root, value);
        return;
    }
    type_node *curr = *root;

    while(curr->next != NULL){
        if(curr->next->a >= value) break;
        curr = curr->next;
    }
    insertAfter(curr, value);
}
void deleteElement(type_node **root, const int value){
    if (*root == NULL) return;

    if ((*root)->a == value){
        type_node *remove_root = (*root);
        *root = (*root)->next;
        free(remove_root);
        return;
    }

    type_node *curr = (*root);

    while(curr->next != NULL){
        if(curr->next->a == value){
            type_node *free_up = curr->next;
            curr->next = curr->next->next;
            free(free_up);
            return;
        }
        curr = curr->next;
    }
}
void Reverse(type_node **root){
    type_node *prev = NULL;
    type_node *curr = *root;
    
    while(curr != NULL){
        type_node *next = curr->next;

        
        curr->next = prev;
        prev = curr;
        curr = next;


    }
    *root = prev;
}
int main(){
    type_node *root;
    root = NULL;
 
        insertSorted(&root, 3);
        insertSorted(&root, 6);
        insertSorted(&root, 10);
        Reverse(&root);

          type_node *curr = root;
        while(curr != NULL){
            printf("Nodes: %d \n", curr->a);
            curr = curr->next;
        }

    freeList(&root);
    return 0;
}