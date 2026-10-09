#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e);

void show(struct employee e){
    printf("code is %d salary is %f name is %s\n",e.code,e.salary,e.name);
}

int main(){
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name,"sanu");
    e1.salary = 54.44;
    show(e1);
    
    return 0;
}