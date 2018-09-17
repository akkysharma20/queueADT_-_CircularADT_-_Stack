#include"queue.h"
Node *menu(Node *rear,int choice)
{
  int item;
  switch(choice)
  {
    case 1:printf("enter data to insert:\n");
           scanf("%d",&item);
           rear=insert(rear,item);
           break;
    case 2:rear=delete(rear);
           break;
    case 3:printf("element at the front of the queue is:%d\n",peek(rear));
           break;
    case 4:display(rear);
           break;
    case 5:
           exit(1);
    default:
            printf("wrong choice\n");
  }
  return rear;
}
