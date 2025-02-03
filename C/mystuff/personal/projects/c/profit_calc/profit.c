/*
    The purpose of this code is to create a net profit calculator using input from the user

    For input we want to have reward and cost

    output is profit = reward - cost

*/

#include <stdio.h>

float calculate(float a, float b);

int main(void)
{
    printf("Enter your estimated profit: ");

    float eprof, ereturn, ecost, aprof;
    scanf("%f", &eprof);

    printf("Enter your estimated return value: ");
    scanf("%f", &ereturn);

    printf("Enter the estimated cost of your project: ");
    scanf("%f", &ecost);

    aprof = calculate(ereturn, ecost);
    printf("Your actual profit is %.2f\n", aprof);

    if (aprof < eprof)
    {
        printf("Your actual profit is less than your estimated profit.\n");
    }
    else if (aprof > eprof)
    {
        printf("Your actual profit if greater than your estimated profit.\n");
    }
    else if (aprof == eprof)
    {
        printf("Your actual profit is the same as your estimated profit.\n");
    }

}

float calculate(float a, float b)
{
    int sum = a - b;
    return sum;
}
