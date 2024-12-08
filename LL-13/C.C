#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
node * delete_tail(node* head){ // deletes the last Node
    if(!head) return NULL;
    if (!head->next)
    {
        free(head);
        return NULL;
    }
    

    node* temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = NULL;
    return head;
}

node* delete_given(node* head, int key){
    if(!head) return NULL;
    if (head->data == key)
    {
        free(head);
        return NULL;
    }

    node* temp = head;
    while (temp->next->data != key && temp->next != NULL)
    {
        temp = temp->next;
    }

    if (!temp->next)
    {
        printf("Key not exist \n");
        return head;
    }
    
    node* deletenode = temp->next;
    temp->next = deletenode->next;
    printf("Deleted -> %d\n",deletenode->data);
    free(deletenode);
    return head;
    
}

node* reverse(node*head){
    if (!head || head->next == NULL) return head;

    node* prev = NULL;
    node* temp = head;
    while (temp)
    {
        node* next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }

    return prev; 
}
int findmin(node* head){
    if(!head) return NULL;

    int min = head->data;
    while (head)
    {
        if(head->data < min) min = head->data;
        head = head->next;
    }
    return min;
    
}
int findmax(node* head){
    if(!head) return -1;
    
    int max = head->data;
    while (head)
    {
        if(head->data > max) max = head->data;
        head = head->next;
    }
    return max;
}
int findlen(node* head){
    if(!head) return 0;
    return 1 + findlen(head->next);
}

node* shuffle(node* head){
    if(!head || head->next == NULL) return head;
    int len = findlen(head);
    int numbers[len];
    int used[len];
    node* temp = head;
    for (int i = 0; i < len; i++)
    {
        numbers[i] = temp->data;
        used[i] = 0;
        temp = temp->next;
    }

    temp = head;
    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {   
        int random = rand() % len;
        while (used[random])
        {
            random = rand() % len;
        }
        used[random] = 1;
        temp->data = numbers[random];
        temp = temp->next;
    }
    
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

    head = delete_tail(head);
    print_ll(head);

    head = delete_given(head,7);
    print_ll(head);

    head = reverse(head);
    print_ll(head);

    printf("MAX : %d\n",findmax(head));
    printf("MIN : %d\n",findmin(head));
    printf("LEN : %d\n",findlen(head));
    head = shuffle(head);
    print_ll(head);
    return 0;
}
