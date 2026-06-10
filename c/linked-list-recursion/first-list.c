#include <stdio.h>
#include <stdlib.h>
//"chat.disableAIFeatures": true
struct Node{
    int nodeint;
    struct Node *next;
};

typedef struct Node short_Node; 

void push_back(short_Node **Node1, const int value){
    short_Node *new_node = malloc(sizeof(short_Node));
    if (new_node == NULL){
        exit(1);
    }
    new_node->nodeint = value;
    new_node->next = NULL;
    short_Node *curr = *Node1;
     if(curr == NULL){
        *Node1 = new_node;
        return;
    }
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = new_node; 
}

void deallocate(short_Node **Node){
    short_Node *curr = *Node;

    while(curr != NULL){
        short_Node *aux = curr;
        curr = curr->next;
        free(aux);
    }
    *Node = NULL;

}
int main(){
short_Node *Node1 = NULL;

push_back(&Node1, 50);
push_back(&Node1, 2);
push_back(&Node1, 10);
push_back(&Node1, -520);


for (short_Node *curr = Node1; curr != NULL; curr = curr->next){
    printf("Node: %d\n", curr->nodeint); 
}

    return 0;
}