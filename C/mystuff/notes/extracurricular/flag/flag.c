/*
    flag.c is for practice with flags

    user input and flags
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Prototypes
void run();

int main()
{
    run();
}

void run()
{
    int o;
    printf("1. Hello, 2. Bye");
    scanf("%d", &o);
    if (o == 1)
    {
        goto flag1;
    }
    if (o == 2)
    {
        goto flag2;
    }

flag1:
    {
        printf("Hello\n");
        NULL;
    }

flag2:
    {
        printf("Bye\n");
        NULL;
    }
}
