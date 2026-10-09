#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // Initialize random number generator
    srand(time(0));

    // Gernerate Random number between 1 to 100
    int randomNumber = (rand() % 100)+1;
    int no_of_guesses = 0;
    int guessed_number;

    do{
        printf("Guess the number\n");
        scanf("%d", &guessed_number);

        if(guessed_number >randomNumber){
            printf("Guess lower number please\n");
        }
        else if(guessed_number <randomNumber) {
            printf("Higher number please\n");
        }
        else{
            printf("Congrats you guess the write number\n");
        }no_of_guesses++;
    }    
    while (guessed_number != randomNumber);
    {
        printf("You gussed the number in %d guesses", no_of_guesses);

    }
    
    return 0;
}