#include"queue.h"
int peek(Node *front)
{
  if(isempty(front))
  {
    printf("queue underflow\n");
    exit(1);
  }
  return front->data;
}
