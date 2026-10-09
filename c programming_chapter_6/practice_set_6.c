#include<stdio.h>

void change_valueX10(int);

void change_valueX10(int a){
    a = a * 10;
}

int main(){
    int s = 45;
    printf("the value of a is %d\n", s);

     change_valueX10(s);
    printf("the value of a is %d\n", s);
    return 0;
}