#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n* sizeof(int));

    ptr[0] = 3;
    ptr[1] = 5;
    printf("%d ",ptr[1]);
    
    ptr = (int*) realloc(ptr ,10* sizeof(int));//after that we can restore 10 memory
    return 0;
}