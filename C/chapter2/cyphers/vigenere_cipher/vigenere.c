/*
    vigenere.c by AJ Audet

    the purpose of this program is a challenge set designed to expand upon the caeser cypher

    ex) text: HI key: no = (72 + 110) % 26 = 0 = H, (73 + 111) % 26 = 1 = , encoded = JI
    Cypher formula:

    C[i] = (P[i] + K[i % klen]) % N
    cypher = (text[i] + key[i % k length]) % number of letters in alphabet
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vigenereCypher(string message, string key);

// name a constant int of the letters in YOUR alphabet, can be changed for outside of English alphabet(26)
// if outside scope of English alphabet you need to change the ascii mapping done in the encrytion function
const int alph_len = 26;

int main(int argc, string argv[])
{
    // checks for the argument count
    if (argc != 2)
    {
        printf("Enter a key\n");
        return 1;
    }
    else // check if key is alphabetical
    {
        // iterate through the key
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            // checks if not alphabetical
            if (!isalpha(argv[1][i]))
            {
                printf("Enter a valid key\n");
                return 1;
            }
        }
    }

    // the key is a constant, it can be chaged to a get_string for user friendlyness later
    string key = argv[1];

    // prompt user for input
    string message = get_string("Enter a sentence or word to encrypt: ");

    // print encrypted message
    printf("ciphertext: ");
    vigenereCypher(message, key);
    printf("\n");
}

void vigenereCypher(string message, string key)
{
    // variable declaration for index, cypher value, and key length
    int i, cypher_val, key_len = strlen(key);
    char cypher;

    // iterate through the message and encrypt it
    for (i = 0; i < strlen(message); i++)
    {
        // if the character is a lowercase(97 - 112)
        if (islower(message[i]))
        {
            // convert the current val of message[i] to int, then vigenere formula it
            // subtract 97 from message and key to account for lowercase, add to alph_len for the same reason
            // key needs to match if the message is lowercase
            cypher_val = ((int) message[i] - 97 + (int) tolower(key[i % key_len]) - 97) % alph_len + 97;

            // convert back to char for the cypher to be done properly
            cypher = (char) cypher_val;
        }
        else if (isupper(message[i])) // uppercase (65 - 90) or alphnum
        {
            // convert the current val of message[i] to int, then vigenere formula it
            // subtract 65 from message and key to account for uppercase, add to alph_len for the same reason
            //  key needs to match if the message is uppercase
            cypher_val = ((int) message[i] - 65 + (int) toupper(key[i % key_len]) - 65) % alph_len + 65;

            // convert back to char for the cypher to be done properly
            cypher = (char) cypher_val;
        }
        else if (isdigit(message[i])) // checking for ints
        {
            cypher_val = atoi(&message[i]);
            cypher = (char) cypher_val;
        }

        // print cypher char if it is alphnum
        if (isalpha(message[i]))
        {
            printf("%c", cypher);
        }
        else // not a letter
        {
            printf("%c", message[i]);
        }
    }
}
