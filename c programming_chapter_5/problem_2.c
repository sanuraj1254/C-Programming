#include<stdio.h>

float c2f(float);
float c2f(float c){
    return ((9/5)*c)+32;
}
int main(){
    float c = 35;

    printf("the number which you want to change in farenheight %f is %f",c,c2f(c));
    
    return 0;
}