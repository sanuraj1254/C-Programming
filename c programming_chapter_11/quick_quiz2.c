//CALLOC FUNCTION
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    //int arr[n];It is not allowed
    ptr[0] = 3;
    printf("%d ",ptr[0]);
    
    return 0;
}