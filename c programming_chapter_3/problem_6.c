#include<stdio.h>

int main(){
    int a=3, b=87, c=56, d=9;

    if(a>b && a>c && c>d){
        printf("a is the gratest of 4 number entered by user");
    }

    else if(b>a && b>c && b>d){
        printf("b is the gratest of 4 number entered by user");
    }

    else if (c>a && c>b && c>d){
        printf("c is the gratest of 4 number entered by user");
    }

    else {
        printf("d is the gratest of 4 number entered by user");
    }

    return 0;
}