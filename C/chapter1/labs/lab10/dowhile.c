#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;

    // write your do-while loop here to accept input between 0 and 10
    do
    {
        number = get_int("Enter a number: ");
    }
    while(number < 0 || number > 10);

    printf("Thank you for the %i!\n", number);
}
