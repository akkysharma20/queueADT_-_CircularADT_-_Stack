#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}Node;
Node *push(int,Node* );
Node *pop(Node*);
int peek(Node*);
int isempty(Node*);
void display(Node*);
Node *menu(Node*,int );
