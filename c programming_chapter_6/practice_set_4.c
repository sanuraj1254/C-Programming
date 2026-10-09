#include<stdio.h>

// ptr == pointer

int* sum(int a , int b){
    int sum=a+b;
    int* ptr = &sum;
    printf("the sum of the two number is %d\n",sum);
    return ptr;
}

float* avrage(int a , int b){
    float avrage=(a+b)/2;
    float* ptr = &avrage;
    printf("The avrage of two number %f\n",avrage);
    return ptr;
}    
int main(){

    int s=90 , g=98;

    int* ptr1;
    int* ptr2;

    printf("the adress of sum is %u \nand of avrage is %u\n", ptr1,ptr2);

    ptr1 = sum(s,g);
    ptr2 = avrage(s,g);

    return 0;
}