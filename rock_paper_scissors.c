#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player1 = 0;
    int player2 = 0;
    time_t t;
    srand(time(NULL));
    player2 = rand() % 4;
    printf("Game of rock paper and scissor in C\n\n");
    printf("The options that you can chosse are:\n");
    printf("1 == Rock\n2 == Paper\n3 == Scissors\n");
    printf("Insert your choose:\n");
    scanf("%d", &player1);
    printf("\n\n");

    if(player1 == 1)
        printf("Rock");
    if(player1 == 2)
        printf("Paper");
    if(player1 == 3)
        printf("Scissors");  

    if(player2 == 0)
        printf(" vs Rock\n");
    if(player2 == 1)
        printf(" vs Paper\n");
    if(player2 == 2)
        printf(" vs Scissors\n"); 

    if(player1 == 1 && player2 == 2 || player1 == 2 && player2 == 0 || player1 == 3 && player2 == 1)
        printf("\n\nCongratulation YOU WIN!\n");
    if(player1 == 1 && player2 == 0 || player1 == 2 && player2 == 1 || player1 == 3 && player2 == 2)
        printf("\n\nEQUALITY, Try Again\n");
    if(player1 == 1 && player2 == 1 || player1 == 2 && player2 == 2 || player1 == 3 && player2 == 0)
        printf("\n\nYOU LOSE!, Try again\n");

    return 0;
}


