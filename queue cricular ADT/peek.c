#include"queue.h"
int peek(Node *rear)
{
  if(isempty(rear))
  {
    printf("queue underflow\n");
    exit(1);
  }
  return rear->next->data;
}
