#include<stdio.h>

int main(){
    int age = 18;
    if (age < 17){
        printf("you re teenager\n");
        printf("You can't vote\n");
   }
   else if (age >= 18 ){
    printf("you become a mature \n");
    printf("you can vote now \n");
   }
    return 0;
}