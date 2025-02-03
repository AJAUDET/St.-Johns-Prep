/*

    Random Number Generator to pick where I go to college

*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    string colleges[] = {"UMASS Amherst", "UMASS Boston", "UMASS Lowell", "Northeastern University", "WPI", "RIT"};

    srand(time(NULL));
    int n = rand() % 100;
    if (n < 15)
    {
        printf("%s\n", colleges[0]);
    }
    else if (n > 15 && n < 30)
    {
        printf("%s\n", colleges[1]);
    }
    else if (n > 30 && n < 45)
    {
        printf("%s\n", colleges[2]);
    }
    else if (n > 45 && n < 60)
    {
        printf("%s\n", colleges[3]);
    }
    else if (n > 60 && n < 75)
    {
        printf("%s\n", colleges[4]);
    }
    else if (n > 75 && n < 100)
    {
        printf("%s\n", colleges[5]);
    }
    else
    {
        printf("%s\n", colleges[6]);
    }
}
