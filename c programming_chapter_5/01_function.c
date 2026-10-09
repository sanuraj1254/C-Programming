#include<stdio.h>


    int sum (int , int);//function prototype 

    // function defination
    int sum(int x , int y){
        printf(" the sum is %d\n",x + y);
        return x + y;
    }

    int main(){
        int a=1 ,b =5;
        sum(a,b);
        int a1 =6 ,b1 = 7;
        sum(a1,b1);
        int a3 =7 ,b3 = 9;
        sum(a3,b3);

        sum(5,7);// we can also use this type 

        int s1=3 , s2= 7;// we can also use this type
        int c= s1+s2;
        printf("the sum is %d",c);



    return 0;
}