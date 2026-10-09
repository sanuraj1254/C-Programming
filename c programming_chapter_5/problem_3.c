#include<stdio.h>

float force(float);
float force(float mass){
    return mass*9.8;
}

int main(){
    float mass = 45;

    printf("the value of force is %f",force(mass));
    
    return 0;
}