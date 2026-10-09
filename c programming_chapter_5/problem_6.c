#include<stdio.h>

int sum_of_natural_no(int);
int sum_of_natural_no(int n) {

    if(n == 1){
        return 1;
    }
    return sum_of_natural_no(n-1)+n;
}
int main(){
    int n = 43;
    printf("the of the natural no is %d",sum_of_natural_no(n) );
    
    return 0;
}