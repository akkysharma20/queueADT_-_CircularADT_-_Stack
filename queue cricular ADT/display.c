#include"queue.h"
void display(Node *rear)
{
  Node *ptr;
  if(isempty(rear))
  {
    printf("queue underflow\n");
    exit(1);
  }
  printf("queue elements:");
  ptr=rear->next;
  do
    {
      printf("%d\t",ptr->data);
      ptr=ptr->next;
    }while(ptr!=rear->next);
  printf("\n");
}
