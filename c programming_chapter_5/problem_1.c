#include<stdio.h>

float average(int a , int b ,int c);
float average(int a ,int b ,int c){
    return (a+b+c)/3.0;
}

int main(){
    int a = 64;
    int b = 77;
    int c = 94;
    printf("the avrage of three number is %f",average(a,b,c));
    
    return 0;
}