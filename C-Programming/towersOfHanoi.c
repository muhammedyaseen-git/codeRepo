#include<stdio.h>

void TowersOfHanoi(int n , char src, char dest, char aux){
    if(n==0)    return;
    TowersOfHanoi(n-1,src,aux,dest);
    printf("Moving ring %d from %c to %c\n",n,src,dest);
    TowersOfHanoi(n-1,aux,dest,src);
    return;
}

int main(){
    int N = 0;
    scanf("%d",&N);
    TowersOfHanoi(N,'A','B','C');
    return 0;
}