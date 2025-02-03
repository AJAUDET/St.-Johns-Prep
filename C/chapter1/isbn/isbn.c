#include <cs50.h>  // Includes the CS50 Library
#include <stdio.h> // Includes the Standard IO Library

int main(void)
{
    long inum = get_long("ISBN: "); // Prompts user input of an ISBN NUMBER
    int sum = 0;                    // Placeholder variable for end values
    int isbnDigit;                  // Placeholder variable for the current digit of the ISBN Number

    for (int i = 10; i >= 0; i--) // For loop to iterate from the last ISBN Digit
    {
        isbnDigit = inum % 10;  // Sets the ISBN Digit value to the ISBN number mod 10
        sum += (isbnDigit * i); // ISBN Digit multiplied by the value of i is added to the sum
        inum /= 10;             // ISBN Number is divided by 10 to account for the change in the digit that we are testing
    }
    if (sum % 11 == 0) // If the Sum of the ISBN Digits multiplied by i returns 0 after bejng moded by 11
    {
        printf("YES\n"); // If TRUE
    }
    else
    {
        printf("NO\n"); // If FALSE
    }
}
