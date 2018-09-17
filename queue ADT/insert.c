#include"queue.h"
Node *insert(Node *front,Node ***rear,int item)
{
  Node *temp;
  temp=(Node*)malloc(sizeof(Node));
  if(temp==NULL)
   {
     printf("memory not allocate");
     return front;
   }
  temp->data=item;
  temp->next=NULL;
  if(front==NULL)
   {
     front=temp;
   }
  else
   {
     (**rear)->next=temp;
   }
   **rear=temp;
   return front;

}
