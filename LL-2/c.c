#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;
}node;

// print linked list function
void print_ll(node* head){
    while(head) // this expression goes while head isn't NULL
    {
        printf("-> %d ", head->data);
        head = head->next; // after print the value, it pass to next pointer
    }
}


main(){
    node * head = (node*)malloc(sizeof(node));

    head->data = 4;
    head->next = NULL;

    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = 5;
    newnode->next = NULL;
    
    head->next = newnode;

    print_ll(head);
}