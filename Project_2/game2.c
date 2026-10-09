#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int player , computer = rand() % 3;
    /*

        0 --> Rock
        1 --> Paper
        2 --> sccisors

    */
   printf("choose 0 for Rock , 1 for Paper , 2 for sccisors\n");
   scanf("%d",&player);
   printf("Computer choose %d\n",computer);

   if (player == 0 && computer == 0)
   {
      printf("Draw");
   }
   else if (player == 0 && computer == 1)
   {
    printf("You Lost");
   }
   else if (player == 0 && computer == 2)
   {
    printf("You Win");
   }
   else if (player == 1 && computer == 0)
   {
    printf("You Win");
   }
   else if (player == 1 && computer == 1)
   {
    printf("Draw");
   }
   else if (player == 1 && computer == 2)
   {
    printf("You Lost");
   }
   else if (player == 2 && computer == 0)
   {
    printf("You Lost");
   }
   else if (player == 2 && computer == 1)
   {
    printf("You Wins");
   }
   else if (player == 2 && computer == 2)
   {
    printf("Draw");
   }
   else{
    printf("Something went wrong");
   }
  
    return 0;
}