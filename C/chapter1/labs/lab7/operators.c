#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter a Number: ");
    int b = a + 3;
    int c = a * 5;
    int d = a / 4;
    int e = a % 4;
    float f = a / 4.0;
    printf("\n");
    printf("%i plus 3 is %i\n", a, b);
    printf("%i times 5 is %i\n", a, c);
    printf("%i divided by 4 is %i\n", a, d);
    printf("%i mod by 4 is %i\n", a, e);
    printf("%i divided by 4.0 is really %f\n", a, f);
}
