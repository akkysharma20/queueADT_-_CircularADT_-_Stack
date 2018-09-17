#include"queue.h"
Node *menu(Node *front,Node **rear,int choice)
{
  int item;
  switch(choice)
  {
    case 1:printf("enter data to insert:\n");
           scanf("%d",&item);
           front=insert(front,&rear,item);
           break;
    case 2:front=delete(front);
           break;
    case 3:printf("element at the front of the queue is:%d",peek(front));
           break;
    case 4:display(front);
           break;
    case 5:
           exit(1);
    default:
            printf("wrong choice\n");
  }
  return front;
}
