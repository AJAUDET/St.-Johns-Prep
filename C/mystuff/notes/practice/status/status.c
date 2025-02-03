#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing Command-Line Argument\n");
        return 1; // change exit status to 1 or failure
    }
    else
    {
        printf("Hello %s\n", argv[1]);
        return 0; // change exit status to 0 or success
    }
}
