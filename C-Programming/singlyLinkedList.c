#include "singlyLinkedList.h"

list* getNewNode(int data){
    list* new_node = (list*)malloc(sizeof(list));
    if(!new_node)  
        return NULL;
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}

list* insertSLL(list*head , int data){
    list* newNode = getNewNode(data);
    if(!newNode)
        return NULL;
    newNode->next=head;
    head=newNode;
    return newNode;
}

void printSLL(list*head){
    if(!head){
        printf("list is empty!\n");
        return;
    }
    while(head){
        printf("%d ",head->data);
        head=head->next;
    }
    puts("");
    return;
}

list* searchSLL(list* head, int item){
    if(!head || head->data==item)
        return head;
    return searchSLL(head->next,item);
}

list* deleteSLL(list* head, int item){
    list* target = searchSLL(head,item);
    if(!target)
        return NULL;
    // check if the first element
    if(target==head){
        head=head->next;
        free(target);
        return head;
    }
    list* temp=head;
    while(temp->next!=target)
        temp=temp->next;
    temp->next=target->next;
    free(target);
    return head;
}

list* reverseSLL(list* prev,list*curr){
    if(curr==NULL)
        return prev;
    list* head = reverseSLL(curr, curr->next);
    curr->next = prev;
    return head;
}
/* main() template
int main(){
    char str[MAX_LIMIT];
    FILE* fptr= fopen("/home/yaseen/codeRepo/C-Programming/ll_input","r");
    if(!fptr){
        printf("trouble opening the file\n");
        return -1;
    }

    list* head = NULL;
    while(fgets(str,MAX_LIMIT,fptr)){
        head=insertSLL(head,atoi(str));
    }
    printSLL(head);
    head=reverseSLL(NULL,head);
    printSLL(head);
    return 0;
}
*/