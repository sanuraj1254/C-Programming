#include<stdio.h>

int main(){
    int marks[5];

    printf("enter the marks of 5 students \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n",&marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the address of marks in index %d is %u\n", i ,&marks[i]);
    }
    
    
    return 0;
}