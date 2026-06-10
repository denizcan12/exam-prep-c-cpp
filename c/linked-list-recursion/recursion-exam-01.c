#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct list {
    int data;
    struct list *next;
} list_t;

bool is_sub_list ( list_t * x, list_t * l ){
    if(x == NULL) return true;
    else if(l == NULL )return false;

    if(x->data == l->data) return is_sub_list(x->next, l->next);

    if(x->data != l->data) return is_sub_list(x, l->next);

}