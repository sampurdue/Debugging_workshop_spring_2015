#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a simple singly linked list
typedef struct node_t {
  struct node_t *next;
  char *value;
} Node;

// pop out one node
Node *make_node(const char *value)
{
  Node *node = malloc(sizeof(Node));
  node->value = strdup(value);
  node->next = NULL;
  return node;
}

// don't write one liners like this. you will sit alone at lunch if
// there are people that have to read this.
void *append_helper(Node *node1, Node *node2)
{
  ! node1->next ? node1->next = node2 : append_helper(node1->next, node2);
}

// append the string "value" to a list
void append_value(Node *list, const char * value)
{
  if (!list)
    return;
  Node *node = make_node(value);
  append_helper(list, node);
}

// move the first node to the back of the list
void move_head_to_back(Node *list)
{
  append_helper(list->next, list);
}

// give all the memory back
void destroy_list(Node *list)
{
  if (!list)
    return;
  destroy_list(list->next);
  free(list->value);
  free(list);
}

void print_list_helper(Node *list)
{
  printf("%s", list->value);
  if (list->next) {
    printf(" => ");
  }
  else {
    printf("\n");
    return;
  }
  print_list_helper(list->next);
}

// print me a list to stdout
void print_list(Node *list)
{
  if (!list)
    return;
  printf("The contents of the linked list are:\n   ");
  print_list_helper(list);
}

int main(int argc, char *argv[])
{
  // make a list of random things
  Node *list = make_node("first element");
  append_value(list, "second element");
  append_value(list, "third argument");
  append_value(list, "some more things");
  append_value(list, "another thing");
  append_value(list, "end");

  // looks nice, doesn't it?
  print_list(list);

  // now move its head to the back
  move_head_to_back(list);

  // print the list now
  print_list(list);

  // destroy it
  destroy_list(list);
  return 0;
}

