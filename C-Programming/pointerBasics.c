#include<stdio.h>

int intPointers(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,0};
    int* ptr1 = arr1;
    int* ptr2 = arr2;
    printf("%p\n",ptr1);
    printf("%p\n",ptr2);
    int* ptr1_end = ptr1 + 4;
    printf("%d\n",*ptr1_end);
    int size = ((ptr1_end - ptr1)/1) + 1 ;
    //int *ptr3 = ptr1+ptr1_end; is an error ptr addition is not defined
    printf("%d\n",size);
    int mat[] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;++i){
        for(int j =0;j<3;++j){
            printf("%d",(  *(mat+i)+j  )   );
        }
        printf("\n");
    }
    return 0;
}

int charPointers(){
    char *name = "Muhammed Yaseen";
    char name_mod[]= "Muhammed Yaseen";
    puts(name);
    puts(name_mod);
    name_mod[3]='X';
    puts(name_mod);
    //will be an error if we assign name[3]='X';
    //puts(name);
    char* manyNames[] = {"Yaseen","Anish","Vipin"};
    printf("%c\n",*(*(manyNames+2)+2)); //p of vipin
    return 0;
}

int main(){
    intPointers();
    charPointers();
    return 0;
}