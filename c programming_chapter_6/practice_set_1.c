#include<stdio.h>

int main(){
    int a = 9;
    int* ptr = &a;
    printf("the address of a is %u\n",&a); 
    printf("The value of a is %d\n",*ptr);
    return 0;
}