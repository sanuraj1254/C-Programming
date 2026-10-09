#include<stdio.h>
int sum(int , int );

int sum(int a, int b){
    return a + b;
}
int main(){
    int g =32;
    int h= 387;
    printf("the sum of 34 and 54 is %d",sum(g, h));
    printf("THe value of g is %d", g);
    return 0;
}