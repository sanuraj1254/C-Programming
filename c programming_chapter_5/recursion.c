#include<stdio.h>

int factorial(int);
 /* 1. Jab aap main function ke andar factorial(a) call karte hain, toh compiler ko pehle se pata hona
 chahiye ki factorial function kya hai, isliye aapko isse pehle declare karna padta hai.
2. Agar aap factorial ki definition main function ke baad dete, toh compiler ko main ke andar
factorial(a) ka use karte waqt function ke baare mein nahi pata hota, aur ye error dega.*/

int factorial(int n){

    if(n==1 || n==0){
        return 1;
    }
    
    return factorial(n-1)*n;
}
int main(){
    int a=10;
    printf("the factorial of a %d is%d\n",a,factorial(a));
    return 0;
}