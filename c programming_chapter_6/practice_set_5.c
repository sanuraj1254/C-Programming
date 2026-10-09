#include<stdio.h>

int main(){
    int i = 8;
    int* ptr1= &i;
    int** ptr2 =&i; //store the address of j
    printf("the value of i is %u\n", i);
     printf("the value of i is %u\n", *ptr1);
      printf("the value of  ptr1is %u\n", **ptr2);
    return 0;
}