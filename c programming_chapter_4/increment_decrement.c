#include<stdio.h>

int main(){
    int i =2;
    printf("the value of i is %d\n",i);

    i = i+2;// i =2+2 =4

    printf("the value of i is %d\n",i);

    printf("the value of i is %d\n",i++);//here the value of i will print frist then increment

    printf("the value of i is %d\n",i);

    printf("the value of i is %d\n",++i);//here the value of i will increment frist then print

    i+=2;//is equal as i =i+2
     printf("the value of i is %d\n",i);



    return 0;
}