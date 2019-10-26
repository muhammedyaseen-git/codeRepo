#include "stack.h"
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#define MAX 128

int isOperator(char x){
    switch(x){
        case '+':case '-':case '*': case '/':return 1;
        default: return 0;
    }
}

int prec(char x, char s){
    if(isEmpty()|| s=='(')
        return 0;
    switch(x){
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return (s=='/'?1:0);
        case '/':
            return (s=='*'?1:0);
    }
}
void infixToPostfix(char* s){
    char x;
    int i = 0;
    while((x=s[i++])!='\0'){
        if(isalpha(x))
            printf("%c",x);
        else if(x=='(')
            push(x);
        else if(isOperator(x)){
            while(!isEmpty()&&prec(x,getTop())){
                printf("%c",getTop());
                pop();
            }         // prec(x)<=prec(top)
            push(x);
        }
        else{               // ')'
            while(!isEmpty() && getTop()!='('){
                printf("%c",getTop());
                pop();
            }
            pop();
        }
    }
    while(!isEmpty()){
        printf("%c",getTop());
        pop();
    }
    puts(" ");
}
int main(){
    char str[MAX];
    fgets(str,MAX,stdin);
    infixToPostfix(str);
    return 0;
}