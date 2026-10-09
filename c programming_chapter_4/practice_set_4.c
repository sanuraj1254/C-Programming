#include<stdio.h>

int main(){
    int sum = 0;
    
    for (int i = 1; i<=10 ; i++)
    {
        sum += (8*i);
    }
    printf("the sum of the table 8 is \n%d",sum);
    
    return 0;
}