/*
    bus.c

    The purpose of this program is to create a working ticket reservation system

    Taking 3 forms of input: a name for a reservation, where they want to go, and how many tickets.

    Outputting "Thank you NAME, for your purchase of NUMBER of tickets, have fun at the LOCATION!"

*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    string locations[] = {"Town", "City", "Inner City"};
    int prices[] = {35, 50, 55};
    printf("HELLO USER PLEASE INPUT A NAME\n");
    string name = get_string("NAME: ");

    int tickets;

    printf("HELLO %s\n", name);

flag1:
{
    string going = get_string("Where would you like to go? The Town, City, or Inner City? ");

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(locations[i], going) == 0)
        {
            printf("You are going to the %s. Ticket cost is $%i per person.\n", going, prices[i]);

            char confirm = get_char("Please type 'C' to confirm or 'N' cancel\n");
            if (confirm == 'c' || confirm == 'C')
            {
                printf("Confirmed\n");
                do
                {
                    tickets = get_int("How many tickets would you like to purchase? ");
                }
                while (tickets < 0);

                printf("The cost for %i tickets is $%i\n", tickets, (prices[i] * tickets));

                char end = get_char("Is that all for your order? Y/N ");
                if (end == 'y' || end == 'Y')
                {
                    printf("Thank you %s for your purchase of %i tickets to the %s. Your total is $%i. Thank you for using our "
                           "service.\n",
                           name, tickets, locations[i], (prices[i] * tickets));
                }
                if (end == 'n' || end == 'N')
                {
                    char reprompt = get_char("Would you like to reorder or cancel your order? R/C ");
                    if (reprompt == 'r' || reprompt == 'R')
                    {
                        goto flag1;
                    }
                    if (reprompt == 'c' || reprompt == 'C')
                    {
                        printf("Order Canceled\n");
                        break;
                    }
                }

                return 0;
            }
            if (confirm == 'n' || confirm == 'N')
            {
                goto flag1;
            }
        }
    }
    printf("\n");
}
}
