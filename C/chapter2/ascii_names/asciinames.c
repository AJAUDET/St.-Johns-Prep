/*
    asciinames.c by AJ Audet

    The purpose of this program is to print out characters in a line and their decimal value

    print out once in all caps, then in propercase first letter caps lowers everything else
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// declare functions

void asciiupper(string name);
void asciiproper(string name);
void asciishift(string name);

int main(void)
{
    string name = get_string("Enter your name: ");
    asciiupper(name);
    asciiproper(name);
    asciishift(name);
}

// function definition
void asciiupper(string name)
{
    // all caps loop, use for loop
    for (int i = 0; i < strlen(name); i++)
    {
        // check condition if a char is uppercase
        if (isupper(name[i]) == false)
        {
            name[i] = name[i] - 32;
        }
        printf("%c, %i\n", name[i], name[i]);
    }
    printf("\n");
}

void asciiproper(string name)
{
    // for propercase loop check if uppercase on characters only change first once
    for (int i = 0; i < strlen(name); i++)
    {
        // check condition of the first element in name[]
        if (islower(name[0]) == false)
        {
            name[0] = name[0] - 32;
        }

        // checks if a char is lowercase
        if (islower(name[i]) == false)
        {
            name[i] = name[i] + 32;
        }
        printf("%c, %i\n", name[i], name[i]);
    }
    printf("\n");
}

void asciishift(string name)
{
    // for loop to shift all characters by 1
    for (int i = 0; i < strlen(name); i++)
    {
        // check conditions for upper and lowercase
        if (isupper(name[i]) == false)
        {
            name[i] = name[i] + 1;
        }
        else if (islower(name[i]) == false)
        {
            name[i] = name[i] + 1;
        }
        printf("%c, %i\n", name[i], name[i]);
    }
    printf("\n");
}
