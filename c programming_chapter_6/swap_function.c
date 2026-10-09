#include<stdio.h>

void swap(int* i, int* b);

void swap(int* i, int* b){
    int temp;
    temp = *i;
    *i = *b;
    *b = temp;
}

int main(){
    int i =9 , b = 10;
    swap(&i, &b);
    printf(" the value of i and b is %d,%d\n",i,b);
    return 0;
}