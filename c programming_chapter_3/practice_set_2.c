#include<stdio.h>

int main(){
    int math, physics, bio;
    
    
    printf("Enter your marks of your Math subjects\n");
    scanf("%d",&math);
    printf("Enter your marks of your physics subjects\n");
    scanf("%d",&physics);
    printf("Enter your marks of your bio subjects\n");
    scanf("%d",&bio);
    int total = math + physics + bio ;
    printf("Total marks obtain by you are%d\n",total);
    

    if(math<33 || physics<33 || bio<33){
        printf("You are fail");

    }
    else{
        printf("You are passed");
    }

    return 0;
}