#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

stack* top = NULL;

int push(char data){
    stack* node = (stack*)malloc(sizeof(stack));
    // if there is no node created
    if(!node)
        return 0;
    node->data=data;
    node->next=top;
    top = node;
    return 1;
}

int isEmpty(){
    return (top==NULL?1:0);
}

char getTop(){
    if(!isEmpty())
        return top->data;
    return '0';
}

int pop(){
    if(isEmpty())
        return 0;
    stack* deleteNode = top;
    top = top->next;
    free(deleteNode);
    return 1;
}
