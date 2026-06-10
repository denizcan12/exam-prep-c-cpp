/*
Exercise 11: The Pairwise Swap
Consider the following structure defining a node in a singly linked list:

C
typedef struct _node {
    int data;
    struct _node* next;
} node;
Write a recursive function:

C
node* swap_pairs(node* head);
that swaps every two adjacent nodes in the linked list and returns the pointer to the head of the modified list.

CRITICAL RULE: You CANNOT just swap the data fields of the nodes. You must physically swap the actual nodes by changing their next pointers.

Note:

You cannot use any loop (for, while, do-while).

You cannot create any helper functions.

You cannot allocate new nodes (malloc) or delete nodes (free). You are only rewiring the existing list.
*/

#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;

node* swap_pairs(node* head) {
    // 1. Base case: If the list is empty or only one node remains, no swap is possible.
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Node A: head
    // Node B: head->next
    node* new_head = head->next; // Save B as the new head!

    // 2. Recursion: Connect A's next pointer to the swapped result of the remaining list (C and after) 
    // using the recursively swapped result.
    // C's address is actually new_head->next!
    head->next = swap_pairs(new_head->next);

    // 3. Complete the pair swap: Link A after B.
    new_head->next = head;

    // 4. The new head of this pair olan B'yi (new_head) return it.
    return new_head;
}


// For an even-length list, head == NULL handles the end; for an odd-length list, trace how head->next == NULL handles the final node. 

//gemini da son chatte o var, onu oku 