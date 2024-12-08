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
    printf("-> NULL \n");
}


node * create_node(int data){
    node * newnode = (node*) malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

node * add_to_list(node* head, int data){
    if(!head) return create_node(data);

    node* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = create_node(data);
    return head;
}

node * add_to_head(node* head, int data){
    if(!head) return create_node(data);

    node * newnode = create_node(data);
    newnode->next = head;
    head = newnode;
    return head;
}

int search(node* head, int key){
    if(!head) return 0;

    node* temp = head;
    while (temp)
    {
        if (temp->data == key)
        {
            printf("Found : key -> %d\n", temp->data);
            return 1;
        }
        temp = temp->next;
    }
    printf("not found\n");
    return 0;
}

node* delete_head(node* head){
    if(!head) return NULL;

    node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
int main(int argc, char const *argv[])
{
    node * head = NULL;

    int numbers[] = {4,5,6,7,8,9};
    for(int i = 0; i < 6; i++) head = add_to_list(head,numbers[i]);

    print_ll(head);

    head = add_to_head(head,780);
    print_ll(head);

    search(head,7);

    head = delete_head(head);
    print_ll(head);
    return 0;
}
