#include<stdio.h>

int main(){
    int a=1 , b=0;
    //if boath value is true or 1 then it will give 1 means true 
    printf("the value of a and b is %d\n",a&&b);
    //if any one is 1 means true value is true or 1 then it will give 1 means true 
    printf("the value of a or b is %d\n",a||b);
    //with the help of !a we can change the value from 1 to zero or zero to 1
    printf("the value of not(a) is %d\n",!a);
    return 0;
}