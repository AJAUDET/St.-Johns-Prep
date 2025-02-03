/*
    The purpose of this program is to gain a better understabnding on how user input works
    throught the use of the "scanf()" function from the stdio.h library, and the "malloc()"
    function from stdlib.h
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Alocate memoty to an array
    char name[100];

    string response[] = {"Good", "Bad", "So-So"};

    printf("Name: ");

    // Scan the terminal for an input, type string
    scanf("%s", name);

    // Print out a custom greeting
    printf("Hello, %s\n", name);

}
