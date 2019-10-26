#include "stack.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LIMIT 128
/*
///////////////////////////////////////////////////////////////////////////////////

typedef struct stack{
    struct stack* next;
    char data;
}stack;

stack* top=NULL; //global top variable

int push(char);
int pop();
int isEmpty(void);
char getTop(void);


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
///////////////////////////////////////////////////////////////////////////////////////////////////////////// 
*/
int isMatching(char close, char open){
    if((open=='('&&close==')') || (open=='['&&close==']') ||  (open=='{'&&close=='}'))
        return 1;
    return 0;
}
int isBalanced(char* s){
    while(pop());
    int n = strlen(s);
    int i = 0;
    for(i=0;i<n;++i){
        // print the current stack
        switch(s[i]){
            case '(':
            case '{':
            case '[':
                push(s[i]);
                break;
            case ')':
            case '}':
            case ']':
                if(!isMatching(s[i],getTop()))
                    return 0;
                pop();
                break;
        }
    }
    return isEmpty();
}
int main(){
    char str[128];
    FILE *fptr=fopen("/home/yaseen/codeRepo/C-Programming/para_input","r");
    if(!fptr){
        printf("unable to open the input file\n");
        return -1;
    }
    while(fgets(str,MAX_LIMIT,fptr)){
        puts(str);
        strtok(str,"\n");
        int res = isBalanced(str);
        if(res) 
            printf("balanced\n");
        else    
            printf("not balanced\n");
    }
    return 0;
}