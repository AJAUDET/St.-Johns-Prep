/*
    rock_paper_scissors.c

    Creating a program that is a player vs computer simulation of rock_paper_scissors
    return val of 0 is a loss
    return val of 1 is a win
    return val of -1 is a tie

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer);

int main()
{
    int n;
    char you, computer, result;

    srand(time(NULL));

    n = rand() % 100;
    if (n < 33)
    {
        computer = 'r';
    }
    else if (n > 33 && n < 66)
    {
        computer = 'p';
    }
    else
    {
        computer = 's';
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n 'r' is ROCK, 'p' is PAPER, 's' is SCISSORS\n\n\n\n\n\n\n\n\n");
    scanf("%c", &you);

    result = game(you, computer);

     if (result == 0)
     {
        printf("YOU TIED! You chose %c, the computer chose %c.\nPLAY AGAIN?\n", you, computer);
     }
     if (result == 2)
     {
        printf("YOU LOSE! You chose %c, the computer chose %c.\n PLAY AGAIN?\n", you, computer);
     }
     if (result == 1)
     {
        printf("YOU WIN! You chose %c, the computer chose %c.\n PLAY AGAIN?\n", you, computer);
     }
}

int game(char you, char computer)
{

    if (you == computer)
    {
        return 0;
    }

    if (you == 'p' && computer == 'r')
    {
        return 1;
    }
    else if (you == 'r' && computer == 'p')
     {
        return 2;
     }

    if (you == 's' && computer == 'p')
    {
        return 1;
    }
    else if (you == 'p' && computer == 's')
    {
        return 2;
    }

    if (you == 'r' && computer == 's')
    {
        return 1;
    }
    else if (you == 's' && computer == 'r')
    {
        return 2;
    }
    return 0;
}
