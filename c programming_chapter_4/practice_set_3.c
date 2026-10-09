#include<stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    while(i<=10){
        sum = sum + i;
        i++;
    }
    /*do while loop
    do{
    sum+=i;
    i++;
    }while (i<=10)
    */
   

    printf("the sum of frist 10 natural numberis %d",sum);
    return 0;
}