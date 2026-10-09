#include<stdio.h>

int main(){
    int marks[] ={98,96,97,99};
    //int *ptr = &marks[0];
    int* ptr =marks;//same as int *ptr = &marks[0];
    
    for (int i = 0; i < 4; i++)
    {
        printf("the marks at index %d is %d\n ", i, *ptr);
        ptr++;
    }
    return 0;
}