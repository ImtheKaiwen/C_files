#include <stdio.h>
#include <stdlib.h>

// basic btree node
typedef struct btree{
    int data;
    struct btree * left;
    struct btree * right;
}node;

node* create_node(int data){
    node * newnode = (node*)malloc(sizeof(node));
    newnode->data =data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

node* insert(node* head, int data){
    if (!head ) return create_node(data);

    if(data < head->data) head->left = insert(head->left,data);
    if(data > head->data) head->right = insert(head->right,data);

    return head;
}

void inorder(node* root){
    if(root){
        inorder(root->left);
        printf("%d -> ",root->data);
        inorder(root->right);
    }
}

int Min(node* root){
    while (root->left)
    {
        root = root->left;
    }
    return root->data;
}


node* Delete(node* root, int data){
    if (root == NULL)
    {
        printf("empty");
        return NULL;
    }

    if (data < root->data)
    {
        root->left = Delete(root->left, data);
    }
    if (data > root->data)
    {
        root->right = Delete(root->right,data);
    }
    else{
        if (root->right == NULL && root->left == nullptr)
        {
            free(root);
            return NULL;
        }

        if (root->right == NULL)
        {
            node* temp = root->left;
            free(root);
            return temp;
        }
        if (root->left == NULL)
        {
            node* temp = root->right;
            free(root);
            return temp;
        }

        root->data = Min(root->right);
        root->right = Delete(root->right,root->data);
        
    }
    
    return root;
}
int main(int argc, char const *argv[])
{
    node* root  = NULL;

    int numbers[] = {1,4,5,6,7,8,9,5,2,3,4,6,6,2,1,4,8};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    for (size_t i = 0; i < size; i++)
    {
        root = insert(root,numbers[i]);
    }

    inorder(root);
    printf("\n");
    root = Delete(root,7);
    inorder(root);
    return 0;
}
