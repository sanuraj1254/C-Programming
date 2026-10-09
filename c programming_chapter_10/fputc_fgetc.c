#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sanu.txt" , "w");
    

    fputc('c' , ptr);
    return 0;
}