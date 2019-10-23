#include<stdio.h>

int main(){
    int x = 248;  // binary const in gcc, x is 248
    printf("%d\n",x); 
    int m = 11110110;
    // 2s for -10 is  11110110  ( 1 byte rep) 
    int res = x&m;
    printf("%d \n",res);
    return 0;
}