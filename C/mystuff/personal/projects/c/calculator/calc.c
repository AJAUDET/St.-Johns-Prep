/*
    calc.c is a simple calculator intended to have multiple functions.
    Such as : Addition(sum), Subtraction(sum), Multiplication(Product), Division(product), Modulus, Power, Rooting a number, and
   Taking a LOG of a number (log base 10)
*/

#include <cs50.h>
#include <math.h>
#include <stdio.h>

// Prototypes
void run();
int sum(int x, int y);
int product(int x, int y);
int power(int x, int y);
int mod(int x, int y);
int root(double x, double y);
int logarithm(int x);

int main(void)
{
    run();
}

// Sum function, use a switch to either add or subtract
int sum(int x, int y)
{
    // variable declaration to show both functions of sumation

    int sumAdd = x + y, sumSubtract = x - y, o;
    o = get_int("1. Add, 2. Subtract: ");

    switch (o)
    {
        case 1:
            printf("Sum of %i and %i is %i\n", x, y, sumAdd);
            break;

        case 2:
            printf("Sum of %i and %i is %i\n", x, y, sumSubtract);
            break;
    }

    return 0;
}

// Power function takes two inputs of ints
int power(int x, int y)
{
    int result = pow(x, y);
    printf("%i raised to the Power of %i is %.0d\n", x, y, result);
    return 0;
}

int product(int x, int y)
{
    int mult = x * y, div = x / y;
    int o = get_int("1. Multiplication, 2. Division");

    switch (o)
    {
        case 1:
            printf("The product of %i and %i is %i", x, y, mult);
            break;

        case 2:
            printf("The product of %i and %i is %i", x, y, div);
            break;
    }

    return 0;
}

int root(double x, double y)
{
    float root = (float) pow(x, 1 / y);
    printf("The product of %f raised to 1/%f is %.3f", x, y, root);
    return 0;
}

int logarithm(int x)
{
    double log = log10(x);
    printf("The Log base 10 of %i is %f", x, log);
    return 0;
}

int mod(int x, int y)
{
    int result = x % y;
    printf("The Mod of %i by %i is %i", x, y, result);
    return 0;
}

void run()
{
    int x, y,
        var = get_int("1. Sum of 2 Numbers , 2. Product of 2 Numbers, 3. Modulus of 2 Numbers, 4. Exponent of 2 Numbers, 5. Root "
                      "of 2 Numbers, 6. Log10 of a Number");
    switch (var)
    {
        case 1:
            x = get_int("Num 1: ");
            y = get_int("Num 2: ");
            sum(x, y);

            break;

        case 2:
            x = get_int("Num 1: ");
            y = get_int("Num 2: ");
            product(x, y);

            break;

        case 3:
            x = get_int("Num 1: ");
            y = get_int("Num 2: ");
            mod(x, y);

            break;

        case 4:
            x = get_int("Num 1: ");
            y = get_int("Num 2: ");
            power(x, y);

            break;

        case 5:
            x = get_int("Num 1: ");
            y = get_int("Num 2: ");
            root(x, y);

            break;

        case 6:
            x = get_int("Num 1: ");
            logarithm(x);

            break;

        default:
            printf("Pick a Function");
            break;
    }
}
