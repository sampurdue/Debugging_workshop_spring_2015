#include<stdio.h>
#include<stdlib.h>
typedef struct t
{
    int data;
    struct t *left;
    struct t *right;
}tree;

tree* insert(tree **node, int data)
{
    if(!(*node))
    {
        *node=malloc(sizeof(tree));
        (*node)->data=data;
        (*node)->left=(*node)->right=NULL;
        return *node;
    }
    else
    {
        if(data>(*node)->data)
        {
            (*node)->right = insert(&((*node)->right),data);
            return *node;
        }
        else
        {
            (*node)->left = insert(&((*node)->left),data);
            return *node;
        }
    }
}

void printtree(tree *node)
{
    if(node)
    {
        printf("%d",node->data);
        printtree(node->left);
        printtree(node->right);
    }
}

void freeMemory(tree *node)
{
    if(node)
    {
        freeMemory(node->left);
        freeMemory(node->right);
        free(node);
    }
}

int main()
{
    tree *NODE = NULL;
    NODE= insert(&NODE,5);
    NODE= insert(&NODE,3);
    NODE= insert(&NODE,8);
    printtree(NODE);
    freeMemory(NODE);
    return 0;
}




/*


*/

