#include<stdio.h>

int main(){
    int x = 10;
    char c = 'A';  //ascii = 65
    long long int  i = 10+ 1ll + 5; // type of RHS converted to the highest type nad then assigned to the left
    printf("%lld\n",i);
    printf("%d \n",c);
    printf("%c \n",x+'a');
    return 0;
}