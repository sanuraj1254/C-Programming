#include<stdio.h>

int starlen(char str[]){
    int i=0,count;
char c = str[i];
while (c!='\0')
{
    c=str[i];
    i++;
}

count = i - 1;
return count;
}
int main(){
    char str[] = "sanu bahi";
    printf("%d",starlen(str));    
    return 0;
}