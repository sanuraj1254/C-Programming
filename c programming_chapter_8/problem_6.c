 #include<stdio.h>
 #include<string.h>

 int main(){
    char c = 'b';
    int contains =0;
     char str[] = "egfkawjeg";
     for (int i = 0; i < strlen(str); i++)
     {
        if (str[i]== c ){
            contains= 1;
            break;
        }
     }
     if (contains)
     {
        printf("yes contains");
     }
     else{
        printf("not contains");
     }
     
    return 0;
 }