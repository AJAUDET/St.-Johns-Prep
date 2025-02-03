/*
    caesar.c by AJ Audet

    the purpose of caesar.c is to create a caesar cypher

    encryption formula is E[i] = (x[i] + n) % alph_len

    caesar cyphers shift by a predetermined value

    I will be using an array to store the message and encrypt it
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encryptCaesar(string message, int shift_val);

// name a constant int of the letters in YOUR alphabet, can be changed for outside of English alphabet(26)
// if outside scope of English alphabet you need to change the ascii mapping done in the encrytion function
const int alph_len = 26;

int main(int argc, char* argv[])
{
    // checks for argument counts
    if (argc != 2)
    {
        printf("Please enter a key\n");
        return 1;
    }

    // get a shift value for the cypher from cli
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // iterate though the string to make sure its all digits
        if (!isdigit(argv[1][i]))
        {
            printf("Error\n");
            return 1;
        }
    }

    int shift_val = atoi(argv[1]);

    // prompt user for message
    string message = get_string("Enter a message: ");

    // print encrypted message
    printf("ciphertext: ");
    encryptCaesar(message, shift_val);
    printf("\n");

    return 0;
}

void encryptCaesar(string message, int shift_val)
{
    // variable declaration for index, cypher value, and cypher
    int i, cval;
    char cypher;

    // iterate through the message and encrypt
    for (i = 0; i < strlen(message); i++)
    {
        // check lowercase condition ie (97 - 112)
        // convert the message value to int and add to shift val
        // subtract 97 to account for lowercase
        // add 97 to account for the shift in the message change
        if (islower(message[i]))
        {
            cval = ((int) message[i] - 97 + shift_val) % alph_len + 97;

            // convert the cval to a character
            cypher = (char) cval;
        }
        else // check upeprcase condition ie (65 - 90) or alphnum
        {
            // subtract 65 to account for uppercase
            // add 65 to account for the shift in the message change
            cval = ((int) message[i] - 65 + shift_val) % alph_len + 65;

            // convert the cval to a character
            cypher = (char) cval;
        }

        // printing the cyphered text
        if (isalpha(cypher)) // if its a letter
        {
            printf("%c", cypher);
        }
        else // not a letter
        {
            printf("%c", message[i]);
        }
    }
}
