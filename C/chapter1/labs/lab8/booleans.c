#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get grade as a number
    int grade = get_int("Enter your grade: ");

    // grades between 90 and 100 get an A
    if (grade <= 100 && grade >= 90)
    {
        printf("You get an A!\n");
    }

    // grades between 80 and 89 get a B
   if (grade <= 89 && grade >= 80)
   {
        printf("You get a B!\n");
   }

    // only grades between 70 and 79 get a C
    if (grade <= 79 && grade >= 70)
    {
        printf("You get a C!\n");
    }
    // all other need improvement
    if (grade <= 69)
    {
    printf("You must work harder to pass this class!\n");
    }
}
