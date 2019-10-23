#include<stdio.h>

int main(){
    int x=0;
    while((x=getchar())!=EOF)
        printf("%c ",x);
    return 0;
}