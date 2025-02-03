// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library
/*
    password.c Base code provided by CS50 Course, edited and completed by AJ Audet

    the purpose of this program is to get used to the ctype library and to practice arrays
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    // create bool variables to check for conditions, then test w/ for loo[]
    bool upper = false, lower = false, num = false, symbol = false;

    // loop through password string checking conditions of the password array, itterate through index
    for (int i = 0; i < strlen(password); i++)
    {
        if (upper == false)
        {
            upper = isupper(password[i]);
        }

        if (lower == false)
        {
            lower = islower(password[i]);
        }

        if (num == false)
        {
            num = isdigit(password[i]);
        }

        if (symbol == false)
        {
            symbol = !isalnum(password[i]);
        }
    }

    if (upper == true && lower == true && num == true && symbol == true)
    {
        return true;
    }

    return false;
}
