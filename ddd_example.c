#include "stdio.h"
#include "stdlib.h"


typedef struct node_struct {
    struct node_struct* next;
    int key;
} node;


node* insertSorted(node** list, int key)
{
    node* newNode = malloc(sizeof(node));
    newNode->key = key;
    newNode->next = *list;

    if (*list == NULL || (*list)->key >= key)    
    {
        *list = newNode;
        return newNode;
    }

    node* w = (*list)->next;
    node* t = *list;

    while (w != NULL)
    {
        if (t->key >= key)
        {
            break;
        }
        t = w;
        w = w->next;
    }
    
    newNode->next = w;
    t->next = newNode;

    return newNode;
}

void print(node* list)
{
    printf("[ ");
    
    node* w = list;

    while (w != NULL)
    {
        printf("%d ", w->key);
        w = w->next;
    }

    printf("]\r\n");
}


int main()
{
    int i;
    int argc = 5;
    int args[] = {5,4,1,2,3};
    
    printf("Sorted Linked List\n");

    node* head = NULL;

    // insert the elements into the linked list in sorted order
    for (i = 0; i < argc; i++)
    {   
        // After inserting each element, display the linked list
        insertSorted(&head, args[i]);

        printf("Added element %d to the array\n", args[i]);
    }

    printf("Should be: [ 1 2 3 4 5 ]\n");
    printf("Actually : ");
    print(head);

    return 0;
}
    
    
