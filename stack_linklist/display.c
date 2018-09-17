#include"stack.h"
void display(Node* top)
{
  Node *ptr;//*top;
  ptr=top;
  if(isempty(top))
  {
    printf("stack is empty\n");
    return;
  }
  printf("stack elements:\n");
  while(ptr!=NULL)
  {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
  printf("\n");
}
