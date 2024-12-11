#include <stdio.h>
#include <stdlib.h>

typedef struct avl
{
    int data;
    int height;
    struct avl * right;
    struct avl * left;
}node;

node* create_node(int data){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->height = 0;
    newnode->right = newnode->left = NULL;
    return newnode;
}

int height(node* root){
    if(!root) return 0;
    return root->height;
}

int maxvalue(int a, int b){
    return (a > b) ? a : b;
}

node* rotate_right(node* root){
    node* x = root->left;
    node* t2 = x->right;

    x->right = root;
    root->left = t2;

    root->height = 1 + maxvalue(height(root->left),height(root->right));
    x->height = 1 + maxvalue(height(root->left),height(root->right));

    return x;
}

node* rotate_left(node* root){
    node* x = root->right;
    node* t2  =x->left;

    x->left = root;
    root->right = t2;

    root->height = 1 + maxvalue(height(root->left),height(root->right));
    x->height = 1 + maxvalue(height(root->left),height(root->right));

    return x;
}

int getbalance(node* root){
    return height(root->left) - height(root->right);
}

node* insert(node* root, int data){
    if(!root) return create_node(data);

    if(data < root->data) root->left = insert(root->left, data);
    if(data > root->data) root->right = insert(root->right,data);
    else return root;

    root->height = 1 + maxvalue(height(root->left),height(root->right));  

    if(getbalance(root) > 1 && data < root->left->data) return rotate_right(root); //LL 
    if(getbalance(root) < -1 && data > root->right->data ) return rotate_left(root);//RR
    if(getbalance(root) > 1 && data > root->left->data){ //LR
        root->left = rotate_left(root->left);
        return rotate_right(root);
    }
    if(getbalance(root) < -1 && data > root->right->data){//RL
        root->right = rotate_right(root->right);
        return rotate_left(root);
    }

    return root;
}

node* Delete(node* root, int data){
    if(!root) return root;

    if(data < root->data) root->left = Delete(root->left,data);
    if(data > root->data) root->right = Delete(root->right,data);
    else{
        if(!root->right && !root->left){
            free(root);
            return NULL;
        }

        node* temp = (!root->right) ? root->left : root->right;
        free(root);
        return temp;
    }

    root->height = 1 + maxvalue(height(root->left),height(root->right));  

    if(getbalance(root) > 1 && getbalance(root->left) >= 0) return rotate_right(root); //LL 
    if(getbalance(root) < -1 && getbalance(root->right) <=0 ) return rotate_left(root);//RR
    if(getbalance(root) > 1 && getbalance(root->right) < 0){ //LR
        root->left = rotate_left(root->left);
        return rotate_right(root);
    }
    if(getbalance(root) < -1 && getbalance(root->left) > 0){//RL
        root->right = rotate_right(root->right);
        return rotate_left(root);
    }

    return root;
}
void print(node* root){
    if(root){
        print(root->left);
        printf("%d ->",root->data);
        print(root->right);
    }
}
int main(int argc, char const *argv[])
{
    node* root = NULL;
    int numbers[]= {97,8,5,6,4,123,75,62};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    for(size_t i = 0; i < size; i++) root = insert(root,numbers[i]);
    print(root);
    printf("\n");
    root = Delete(root,62);
    print(root);
    return 0;
}
