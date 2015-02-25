#include<stdio.h>
#include<stdlib.h>

struct tree{
  int data;
  struct tree *left;
  struct tree *right;
};

struct tree* insert(struct tree* node, int data)
{
    if( node == NULL ) {
        node = malloc( sizeof(struct tree) );
        node->data = data;
        node->left = node->right = NULL;
    } else {
        if( data > node->data ){
            node->right = insert(node->right, data);
        } else {
            node->left = insert(node->left, data);
        }  
    }

    return node;
}

void printtree(struct tree* node)
{
    if( node != NULL ){
        printf("%d\n", node->data);
        printtree(node->left);
        printtree(node->right);
    }   
} 

int main()
{
    struct tree *NODE = NULL;

    NODE = insert(NODE, 5);
    NODE = insert(NODE, 3);
    NODE = insert(NODE, 8);

    printtree(NODE);

    return 0;
}

