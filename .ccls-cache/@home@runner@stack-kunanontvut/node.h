//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//
#include <stdio.h> 
#include <stdlib.h>
#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    char data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

#endif
/*
void push(NodePtr* top,int x);
int pop(NodePtr* top);


void push(NodePtr *top,int x){
    Node *new_node = (NodePtr)malloc(sizeof(Node));
    if(new_node){
      new_node->data = x;
      new_node->nextPtr = *top;
      *top = new_node;
    }
  
}

int pop(NodePtr *top){
    NodePtr t =*top;
    if(t){
    int value = t->data;
    *top=t->nextPtr;
    free(t);
    return value;
    }
    else printf("Empty Stack\n");
  return 0;
}
*/