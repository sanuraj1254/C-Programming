#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n* sizeof(int));
    //int arr[n];It is not allowed
    ptr[0] = 3;
    ptr[1] = 5;
    printf("%d ",ptr[1]);
    
    return 0;
}