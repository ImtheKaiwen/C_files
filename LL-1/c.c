#include <stdio.h>
#include <stdlib.h>

// linkedlist struct 

typedef struct Node
{
    int data;
    struct Node* next;
}node;

main(){
    // head of list
    node * head = NULL;
    
    head = malloc(sizeof(node)); // memory allocation for new node
    // manual add
    head->data = 4;
    head->next = NULL;

    printf("-> %d ",head->data);
}
