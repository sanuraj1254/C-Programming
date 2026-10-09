#include<stdio.h>
#include<string.h>

int main(){
    char st[] = "Sanu";
    char a1[50] = "raj";
    char a2[50] = " Raj";

    //printf("%d",strlen(st));

    char source[] = "Sanu";
    char target[30];
    strcpy(target, st);
    printf("%s %s ", st , target);

    strcat(a1, a2);
    printf("%s %s",a1,a2);
    
    return 0;
}