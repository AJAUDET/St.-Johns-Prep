/*
    string.c by AJ Audet

    the purpose of string.c is to iterate through a string and print out 1 char per line
    how to do: use a for loop
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter your name: ");

    // write a for loop to iterate through name and print each char on it's own line
    for(int i = 0; i < strlen(name); i++)
    {
        printf("%c\n", name[i]);
    }

}
