// Practice before finding loops/cycles in a linked list
#include <stdlib.h>
#include <stdio.h>

struct Node{
    int a;
    struct Node *next;
};

typedef struct Node type_node;

void remove_all_elements(type_node **root, int value){

    type_node *curr = *root;  
    if (curr == NULL) return; 
    
    while (curr != NULL && curr->a == value){
        type_node *aux = curr;
        curr = curr->next;
        free(aux);
    }

    *root = curr;
    if (curr == NULL) return;

dont_change_curr:
    while(curr->next != NULL){ //general case 
        if(curr->next->a == value){
            type_node *aux = curr->next;
            curr->next = curr->next->next;
            free(aux);
        }
        else {
                curr = curr->next;
        }
    }
}


void deallocate_recursively(type_node *root){
    if (root == NULL) return;
    
    deallocate_recursively(root->next);
    free(root);



}

int main(){
    type_node *Node1 = malloc(sizeof(type_node));
    type_node *Node2 = malloc(sizeof(type_node));
    type_node *Node3 = malloc(sizeof(type_node));

    Node1->next = Node2;
    Node1->a = 10;
    Node2->next = Node3;
    Node2->a = 20;
    Node3->next = NULL;
    Node3->a = 10;

    remove_all_elements(&Node1, 10);

    type_node *curr = Node1;

    while(curr != NULL){
        printf("Nodes: %d \n", curr->a);
        curr = curr->next;
    }







}
