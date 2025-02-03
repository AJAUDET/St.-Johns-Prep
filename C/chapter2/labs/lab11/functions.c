/*

    functions.C

    this is a program that is the start of using functions in C.

*/

#include <cs50.h>
#include <stdio.h>

int get_postitive_int(string prompt);

int main(void)
{
    int n = get_postitive_int("Enter a positive number: ");

    // print the output from our function
    printf("My positive int is %i\n", n);
}

int get_postitive_int(string prompt)
{
    // modify our function to print the prompt & return a positive int
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1);
    return n;
}
