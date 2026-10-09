#include<stdio.h>
int mystrlen(char str[]){
     int i = 0, count;
     char c = str[i];
     while (c!='\0'){
        c=str[i];
        i++;
    }
}
void strcopy(char target[] , char source[]){
    for (int i = 0; i < mystrlen(source); i++)
    {
       target[i]=source[i];
    }
    target[mystrlen(source)] ='\0';
}
int main(){
    char source[] = "harry";
    char target[30];
    strcopy(target , source);
    printf("%s %s",target,source);
    
    return 0;
}