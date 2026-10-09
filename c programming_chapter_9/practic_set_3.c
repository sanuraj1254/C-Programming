#include<stdio.h>

typedef struct emp{
    int salary ;
    float score;
}Employee;

int main(){
    Employee e1;
    Employee* ptr1 = &e1;
    ptr1->salary = 90;
    ptr1->score = 34.42;

    printf("The value of salary is %d and value of score is %.3f \n",ptr1->salary,ptr1->score);
    
    return 0;
}