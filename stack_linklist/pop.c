#include"stack.h"
Node* pop(Node* top)
{
  Node *temp;
  int item;
  if (isempty(top))
  {
    printf("stack underflow\n");
    exit(1);
  }
  temp=top;
  item=temp->data;
  top=top->next;
  free(temp);
  printf("%d\n",item);
  return top;
}
