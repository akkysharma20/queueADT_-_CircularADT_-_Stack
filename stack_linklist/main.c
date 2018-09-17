#include"stack.h"
int main()
  {
    int choice;
    Node* top=NULL;
  while (1)
  {
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("5.Quit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    top=menu(top,choice);
  }
}
