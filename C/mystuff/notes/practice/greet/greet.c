#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) // argv[] is some array of strings or all words you type as the prompt, argc == argument count, or the length of the array of strings
{
   if (argc == 2)
   {
    printf("Hello %s\n", argv[1]);
   }
   else
   {
    printf("Hello, World\n");
   }
}
