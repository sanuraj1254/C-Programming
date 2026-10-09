#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d",marks);

    if ("marks >=90<100"){
        printf("You got A Grade");
    }
    else if ("marks>=80<90"){
        printf("You got B Grade");
    }
    else if ("marks >=70<80"){
        printf("You got B Grade");
    }
     else if ("marks>=60<70"){
        printf("You got B Grade");
    }
    else if ("marks >=50<60"){
        printf("You got B Grade");
    }
    else{
        printf("You are Fail");
    }
    
    return 0;
}