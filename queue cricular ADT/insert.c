#include"queue.h"
Node *insert(Node *rear,int item)
{
  Node *temp;
  temp=(Node*)malloc(sizeof(Node));
  if(temp==NULL)
   {
     printf("memory not allocate");
     return rear;
   }
  temp->data=item;
  if(isempty(rear))
   {
     rear=temp;
     temp->next=rear;
   }
  else
   {
     temp->next=rear->next;
     rear->next=temp;
     rear=temp;
   }
   return rear;

}
