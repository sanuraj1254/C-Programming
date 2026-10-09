#include<stdio.h>

int main(){
    int marks [90];//Reserve space for 90 integers
    
    marks[0] = 45;
    marks[1] = 98;
    //we can go all the way till marks[89]
    printf("the marks in 0 and 1 is %d ,%d",marks[0], marks[1]);
    return 0;
}