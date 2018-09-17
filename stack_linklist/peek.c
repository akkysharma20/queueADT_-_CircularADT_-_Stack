#include"stack.h"
int peek(Node* top)
{
  //Node *top;
  if(isempty(top))


  {
    printf("stack overflow\n");
    exit(1);
  }
  return top->data;
}
