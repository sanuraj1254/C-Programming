#include<stdio.h>

int main(){
    char arr[6];
    //scanf("%s", arr);
    //printf("%s",arr);
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&arr[i]);
        fflush(stdin);
    }
    arr[5]='\0';
    printf("%s", arr);
    return 0;
}