/*
    array.c by AJ Audet

    the purpose of array.c is to print out how many hours a day you spend on homework, then print them out
*/
#include <cs50.h>
#include <stdio.h>

int NUM_DAYS = 5;

int main(void)
{
    int hours[NUM_DAYS];

    // write a for loop to prompt for the number of hours for each day. Input into an array
    for(int i = 0; i < NUM_DAYS; i++)
    {
        hours[i] = get_int("How many hours do you spend on homework on the %i day?\n", (i + 1));
    }

    // write another for loop to print out the number of hours for each day
    for(int i = 0; i < NUM_DAYS; i++)
    {
        printf("You spent %i hour(s) on homework on the %i day.\n", hours[i], (i + 1));
    }


}
