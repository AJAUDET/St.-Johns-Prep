/*
    makin the performance task

    Purpose: Simulating Rock Paper Scissors against the computer

    Function: Taking user input of R(r), P(p), or S(s) and will run a RNG to figure out the computer’s move. R beats S, P beats R, S beats P… etc. 
*/

#include <iostream>
using namespace std;

// prototypes
char computerMove(int choice);
int game(char you, char computer);

int main()
{
    // introducing randomness for the computer 
    srand(time(NULL));

    // variable creation for tracking of what moves the player makes
    char player = ' ', choice = ' ';
    int wins = 0, loss = 0, ties = 0;

    cout << "Do you want to play Rock Paper Scissors? (y/n) ";
    cin >> choice;

    //will always prompt after the game
   do
    {
        if(choice == 'y' || choice == 'Y')
        {
            char computer = computerMove(rand() % 3);
            
            // prompt user for input
            cout << "Enter Your Move: ";
            cin >> player;
            
            // playing the game
            if (game(player, computer) == 0)
            {
                cout << "Your Move: " << player << " Computer Move: " << computer << endl;
                cout << "You Win!" << endl;

                // w/l/t tracking
                wins++;
                cout << "Wins: " << wins << " Losses: " << loss << " Ties: " << ties << endl;
            }
            else if(game(player, computer) == 1)
            {
                cout << "Your Move: " << player << " Computer Move: " << computer << endl;
                cout << "You Lost!" << endl;

                // w/l/t tracking
                loss++;
                cout << "Wins: " << wins << " Losses: " << loss << " Ties: " << ties << endl;
            }
            else
            {
                cout << "Your Move: " << player << " Computer Move: " << computer << endl;
                cout << "You Tied!" << endl;

                // w/l/t tracking
                ties++;
                cout << "Wins: " << wins << " Losses: " << loss << " Ties: " << ties << endl;
            }

            cout << "Play again? ";
            cin >> choice;
            if(choice == 'n' || choice == 'N')
            {
                break;
            }
        }
        else if(choice == 'n' || choice == 'N')
        {
            break;
        }
    }
    while(choice != 'n' || choice != 'N');

    cout << "Bye Bye" << endl;

    return 0;
}

// my created functions

// tracking the move made by the computer 
char computerMove(int choice)
{
    // array of characters that contains all moves the computer can make 
    char move[] = {'R', 'P', 'S'};

    // returning the move made by the computer using the input of choice to find which character from the array to use
    return move[choice];
}

// where the game is really played
int game(char you, char computer)
{
    /*  different outcomes of the game
        0 is a win, 1 is a loss, 2 is a tie

        tossing all conditions into one statement for each to reduce the ammount of else if statements
    */

    // win section: R & S / P & R / S & P
    if(((you == 'r' || you == 'R') && computer == 'S') || ((you == 'p' || you == 'P') && computer == 'R') || ((you == 's' || you == 'S') && computer == 'P'))
    {
        return 0;
    }
    //loss section: R & P / P & S / S & R
    else if(((you == 'r' || you == 'R') && computer == 'P') || ((you == 'p' || you == 'P') && computer == 'S') ||((you == 's' || you == 'S') && computer == 'R')) 
    {
        return 1;
    }
    // tie section: R & R / P & P / S & S
    else if(((you == 'r' || you == 'R') && computer == 'R') || ((you == 'p' || you == 'P') && computer == 'P') ||((you == 's' || you == 'S') && computer == 'S'))
    {
        return 2;
    }

    return -1;
}