#include<stdio.h>

int main(){
    int i = 8;
    int* j= &i;
    int** f =&j; //store the address of j
    printf("the value of i is %u\n", j);
     printf("the value of i is %u\n", f);
      printf("the value of i is %u\n", *j);
    return 0;
}