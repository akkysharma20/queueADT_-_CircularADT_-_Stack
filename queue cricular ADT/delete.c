#include"queue.h"
Node *delete(Node *rear)
{
  Node *temp;
  int item;
  if(isempty(rear))
  {
    printf("queue underflow\n");
    exit(1);
  }
  if(rear->next==rear)
    {
      temp=rear;
      rear=NULL;
    }
    else
    {
      temp=rear->next;
      rear=rear->next->next;
    }
    item=temp->data;
    free(temp);
    printf("deleted item is:%d",item);
      return rear;
}
