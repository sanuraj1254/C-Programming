#include<stdio.h>

void change_valueX30(int* a);

void change_valueX30(int* a){
    *a = *a * 10;
}

int main(){
    int s = 45;
    printf("the value of a is %d", s);

     change_valueX30(&s);
    printf("the value of a is %d", s);
    return 0;
}