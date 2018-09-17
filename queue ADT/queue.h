#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}Node;

Node *menu(Node *,Node **,int );
Node *insert(Node *,Node ***,int );
Node *delete(Node *);
int peek(Node *);
int isempty(Node *);
void display(Node *);
