#include"queue.h"
void display(Node *front)
{
  Node *ptr;
  ptr=front;
  printf("queue elements:");
  while(ptr!=NULL)
  {
    printf("%d",ptr->data);
    ptr=ptr->next;
  }
  printf("\n");
}
