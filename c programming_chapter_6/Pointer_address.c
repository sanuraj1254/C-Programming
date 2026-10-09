#include<stdio.h>

int main(){
    int i = 76;
    int* j =&i;// here j will store adress of i
    printf("the address of i is %p\n",&i); //

     printf("the address of i is %u\n",&i); //integer value

     printf("the address of i is %p\n",j);
     printf("the %d",&*(j));
    return 0;
}
//* will ask value
//%will ask add\nress