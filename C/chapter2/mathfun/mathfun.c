/*

    Write a single program, mathfun.c, with at least 5 functions.
    Your program should take as input a single integer between 11 and 99 inclusive.
    It should return the results of five mathematical functions.

    Sum of digits 2 inputs, opposite 1 input (input 45 return 54), even or odd 1 input(return a word), check prime (Boolean) use
    mod, power x^y(raise)

*/

// libraries used
#include <cs50.h>
#include <stdio.h>
#include <math.h>

//  Prototypes
int sum(int x, int y);
int reverse(int x);
string evenOdd(int x);
int checkPrime(int x);
int power(int x);
void run();

int main(void)
{
    run();
}

void run()
{
    // Variable declaration for switch, and placeholder values of x and y
    int o, x = 0, y = 0;

    // create a switch to choose from the five (5) functions
    o = get_int("1. Sum, 2. Opposite, 3. Even or Odd, 4. Check Prime, 5. Power: ");
    switch (o)
    {
        case 1: // Sum
            do
            {
                x = get_int("X: ");
                y = get_int("Y: ");
            }
            while ((x < 11 || x > 99) || (y < 11 || y > 99));

            sum(x, y);
            break;

        case 2: // Opposite
            do
            {
                x = get_int("X: ");
            }
            while (x < 11 || x > 99);

            reverse(x);
            break;

        case 3: // Even or Odd
            do
            {
                x = get_int("Enter a number: ");
            }
            while (x < 11 || x > 99);

            evenOdd(x);
            break;

        case 4: // Check Prime
            do
            {
                x = get_int("Enter a numeber: ");
            }
            while (x < 11 || x > 99);
            checkPrime(x);
            break;

        case 5: // Power of
            do
            {
                x = get_int("X: ");
            }
            while ((x < 11) || (x > 99));
            power(x);
            break;

        default:
            printf("Choose a function\n");
            break;
    }
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

// reverse needs one int to inverse it
int reverse(int x)
{
    // variable declaration, need to check the remainder and have a var that stores the old x value
    int reverse = 0, remainder, num = x;

    while (x != 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }

    printf("The Reverse of %i is %i\n", num, reverse);
    return 0;
}

// even odd needs one numeber to see if it is even or odd
string evenOdd(int x)
{
    int check = x % 2;
    if (check == 0)
    {
        printf("%i is Even\n", x);
    }
    else if (check == 1)
    {
        printf("%i is Odd\n", x);
    }
    return 0;
}

// check prime needs one input
int checkPrime(int x)
{
    // variable declaration
    int i, prime = 0;

    // make a for loop to check if conditions met
    for (i = 2; i < x / 2; i++)
    {
        if (x % i == 0)
        {
            prime = 1;
            break;
        }
    }
    // if the number has a remainder of 1 it will not be prime
    if (prime == 0)
    {
        printf("%i is Prime\n", x);
    }
    else
    {
        printf("%i is not Prime\n", x);
    }

    return 0;
}

// Power function takes one inputs of int and prints out the power of the degits ex) 45 == 4^5
int power(int x)
{
    // Variable declaration
    int base, exp;

    // splitting x into parts, first and second digit
    base = x / 10;
    exp = x % 10;

    printf("%i raised to the Power of %i is %.0f\n",base, exp, pow(base, exp));
    return 0;
}
