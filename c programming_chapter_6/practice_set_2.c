#include<stdio.h>

int returning_5(int* ptr){
    printf("The value of ptr is %d ", ptr);
    printf("The value at ptr is %d ", *ptr);
    return 5;
}

int main(){
    int a = 9;
    int* ptr = &a;
    printf("the address of a is %u\n",&a); 
    printf("The value of a is %d\n",*ptr);
    returning_5(ptr);
    return 0;
}