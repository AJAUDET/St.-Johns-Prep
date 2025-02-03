#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = get_int("Enter a number: ");
    int counter = 0;

// add your code here
    while(n < 100)
    {
        n = abs(n) * 2;
        counter++;
    }

    printf("Your number can be doubled %i times before reaching 100!\n", counter);
}
