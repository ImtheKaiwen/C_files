#include <stdio.h>
#include <stdlib.h>

// basic btree node
typedef struct btree{
    int data;
    struct btree * left;
    struct btree * right;
}node;

int main(int argc, char const *argv[])
{
    node * root = (node*)malloc(sizeof(node));
    root->data = 4;
    root->left = root->right = NULL;

    printf("%d" ,root->data);
    return 0;
}
