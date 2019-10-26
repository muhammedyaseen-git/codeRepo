#include<stdio.h>
#include<stdlib.h>

#define MAX_LIMIT 128

typedef struct list{
    int data;
    struct list* next;
}list;

list* getNewNode(int data);
list* insertSLL(list*head , int data);
void printSLL(list*head);
list* searchSLL(list* head, int item);
list* deleteSLL(list* head, int item);
list* reverseSLL(list* prev,list*curr);

