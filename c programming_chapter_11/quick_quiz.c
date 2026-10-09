//MALLOC FUNCTION
#include<stdio.h>
#include<stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    scanf("%f", &n);
    ptr = (float*) malloc(n* sizeof(float));
    
    ptr[0] = 3.542;
    ptr[1] = 6.542;
    ptr[2] = 67.542;
    ptr[3] = 33.542;
    ptr[4] = 37.542;

    printf("%f\n",ptr[0]);
    printf("%f\n",ptr[1]);
    printf("%f\n",ptr[2]);
    printf("%f\n",ptr[3]);
    printf("%f\n",ptr[4]);



    return 0;
}