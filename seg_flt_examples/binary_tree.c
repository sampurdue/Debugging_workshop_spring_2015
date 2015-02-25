#include<stdio.h>
#include<stdlib.h>
struct tree{
  int data;
  struct tree *left;
  struct tree *right;
};

struct tree* insert(struct tree* node, int data)
{
  if(!node){
    node=malloc(sizeof(struct tree));
    node->data=data;
    node->left=node->right=NULL;
    return node;
  }
  else {
    if(data>node->data){
     node->right= insert(node->right,data);
     return node;
    }
    else{
     node->left= insert(node->left,data);
    }  
 return node;
  }
}
printtree(struct tree* node)
{
  if(node){
      printf("%d",node->data);
  }
      printtree(node->left);
      printtree(node->right);

} 
main()
{
 int i,n;
 struct tree *NODE;
 NODE= insert(NODE,5);
 NODE= insert(NODE,3);
 NODE= insert(NODE,8);
 printtree(NODE);
}

