#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sanu.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d \n", num);
    
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d \n", num);
    
    fclose("fptr");
    return 0;
}