#include"stack.h"
Node *menu(Node* top,int choice)
{
  int item;
  switch (choice)
  {
    case 1: printf("enter the item to be push\n");
            scanf("%d",&item);
            top=push(item,top);
            return top;
            break;
    case 2: top=pop(top);
            return top;
            break;
    case 3: printf("item at top of the stack is:%d\n",peek(top));
            return top;
            break;
    case 4: display(top);
            return top;
            break;
    case 5:
            exit(1);
    default:
            printf("wrong choice\n");
  }
}
