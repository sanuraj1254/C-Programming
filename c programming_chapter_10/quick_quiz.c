#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("sanu.txt", "r");

    if (ptr == NULL) {
        printf("the file does not exist\n");
    } 
    else {
        int num;
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);
        
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);
    }
    fclose(ptr);//This is the way to tell that your program will finish
    return 0;
}
