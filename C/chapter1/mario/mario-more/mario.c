#include <cs50.h>
#include <stdio.h>

int get_height(string prompt);

int main(void)
{
    // TODO PROMPT FOR HEIGHT OF PYRAMIDS
    int number = get_height("Height: ");

    // TODO BUILD THE PYRAMID, NEEDS BLOCKS, SPACES, AND A GAP
    for (int height = 0; height < number; height++)
    {
        for (int spaces = number - height - 2; spaces >= 0; spaces--)
        {
            printf(" ");
        }
        for (int lblock = 0; lblock <= height; lblock++)
        {
            printf("#");
        }
        printf("  ");
        for (int rblock = 0; rblock <= height; rblock++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_height(string prompt)
{
    int number;
    do
    {
        number = get_int("%s", prompt);
    }
    while (number < 1 || number > 8);
    return number;
}
