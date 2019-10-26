#ifndef STACK_H
#define STACK_H


typedef struct stack{
    struct stack* next;
    char data;
}stack;

stack* top; //global top variable

int push(char);
int pop();
int isEmpty(void);
char getTop(void);

#endif