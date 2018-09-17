#include"queue.h"
int main()
  {
    int choice,item;
    Node *rear=NULL;
    while (1)
      {
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display the element at front\n");
        printf("4.display all elements of queue\n");
        printf("5.Quit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        rear=menu(rear,choice);
      }
}
