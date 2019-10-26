#include<stdio.h>

int stringCompare(const char* s, const char* t){
    for(;*s==*t;++s,++t){
        //printf("%c %c\n",*s,*t);
        //if(*s=='\0'||*t=='\0')break;
    }

    return *s - *t;
}

int main(){
    int res[10];
    res[0]=stringCompare("ll","lk");
    res[1] = stringCompare("abc","abc");
    res[2] = stringCompare("def","defgh");
    res[3] = stringCompare("defgh","def");
    res[4] = stringCompare("hello","h");
    res[5] = stringCompare("h","hello");
    for(int i=0;i<6;++i)
        printf("%d ",res[i]);
    printf("\n");
    return 0;
}