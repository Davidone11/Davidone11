//Hello! Here I made a "Rock, paper, scissors" game! Hope you like it, enjoy!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
    srand( time(NULL) );
  
    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;
    printf("Hello! I'm Winky, the AI! I like playing Rock Paper Scissors, want to give it a try?\n\n");


    do
    {
    printf("Select your throw.\n");
    printf("1) Rock\n");
    printf("2) Paper\n");
    printf("3) Scissors\n");
    printf("Selection: ");
    scanf("%d", &player_throw);
    
    ai_throw = (rand() % 3) + 1;
    
    if (ai_throw == ROCK)
      printf("\nWinky throws ROCK.\n");
    else if (ai_throw == PAPER)
      printf("\nWinky throws PAPER.\n");
    else if (ai_throw == SCISSORS)
      printf("\nWinky throws SCISSORS.\n");
    
    draw = false;
    if (player_throw == ROCK && ai_throw == SCISSORS)
      printf("\nROCK beats SCISSORS. HOOOOOORAY!! You won!!!!!!\n\n");
    else if (player_throw == ROCK && ai_throw == PAPER)
      printf("\nPAPER beats ROCK. I'm sorry, you lost\n\n");
    else if (player_throw == SCISSORS && ai_throw == PAPER)
      printf("\nSCISSORS beats PAPER. HOOOOOORAY!! You won!!!!!!\n\n");
    else if (player_throw == SCISSORS && ai_throw == ROCK)
      printf("\nROCK beats SCISSORS. I'm sorry, you lost\n\n");
    else if (player_throw == PAPER && ai_throw == ROCK)
      printf("\nPAPER beats ROCK. HOOOOOORAY!! You won!!!!!!\n\n");
    else if (player_throw == PAPER && ai_throw == SCISSORS)
      printf("\nSCISSORS beats PAPER. I'm sorry, you lost\n\n");
    else
    {
      printf("\nDraw! Let's play again.\n\n");
      draw = true;
    }
  
    } while (draw);

    return 0;
}