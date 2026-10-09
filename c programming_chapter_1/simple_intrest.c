#include<stdio.h>

int main(){
    float p ;int r , t , SI;
    printf("enter the principal amount ");
    scanf("%f",&p);
    printf("enter the intrest rate ");
    scanf("%d",&r);
    printf("enter the time ");
    scanf("%d",&t);
    printf("the value of simple interst is %f",(p*r*t)/100);
    return 0;
}