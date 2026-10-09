#include<stdio.h>

int main(){
    int n;
    printf("enter the number");
    scanf("%d", &n);

    for (int i= 1; i <= 10; i++)  //(int i = 10 ; i; i--) DEcresment opreater          
    {
        printf("%d x %d = %d\n",n ,i , n*i);
    }
    
    return 0;
}