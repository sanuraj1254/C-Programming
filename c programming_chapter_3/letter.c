#include<stdio.h>

int main(){
    char ch;

    printf("enter the character \n");
    scanf("%c",ch);
    
    if(ch >= 'A' && ch <= 'Z'){
        printf("character is upper case\n");
    }

    else if (ch >= 'a' && ch<= 'z'){
        printf(" character is lower case\n");
    }

    else{
        printf("the enterd object is not charecter\n");
    }
    
    return 0;
}