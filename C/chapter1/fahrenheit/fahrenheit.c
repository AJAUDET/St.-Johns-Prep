#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float F, C;
    C = get_float("What is the Temperature in Celcius: ");

    F = ((C * 9) / 5) + 32;

    printf("%.1f Degrees Celcius in Fahrenheit is %.1f Degrees\n", C, F);
}
