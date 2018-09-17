#include"stack.h"

Node* push(int item, Node* top)
{
  Node *temp;
  temp=(Node *)malloc(sizeof(Node));
  if(temp==NULL)
  {
    printf("stack overflow\n");
    return;
  }
  temp->data=item;
  temp->next=top;
  top=temp;
  return top;
}
