#include"queue.h"
Node *delete(Node *front)
{
  Node *temp;
  int item;
  if(isempty(front))
  {
    printf("queue underflow\n");
    exit(1);
  }
  temp=front;
  item=temp->data;
  front=front->next;
  free(temp);
  printf("deleted item is:%d",item);
  return front;
}
