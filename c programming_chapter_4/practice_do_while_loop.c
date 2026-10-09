#include<stdio.h>

int main(){
    int n, i = 1;
    printf("Enter number\n");
    scanf("%d",&n);

    do{
        printf("%d\n",i);
        i++;
    } while (i <= n);
    
    return 0;
}