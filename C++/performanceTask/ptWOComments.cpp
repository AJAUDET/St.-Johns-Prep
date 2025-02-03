#include <iostream>
using namespace std;

char computerMove(int choice);
int game(char you, char computer);

int main()
{
    srand(time(NULL));

    char player = ' ', choice = ' ';
    int wins = 0, loss = 0, ties = 0;

    cout << "Do you want to play Rock Paper Scissors? (y/n) ";
    cin >> choice;

   do
    {
        if(choice == 'y' || choice == 'Y')
        {
            char computer = computerMove(rand() % 3);
            
            cout << "Enter Your Move: ";
            cin >> player;
            
            if (game(player, computer) == 0)
            {
                cout << "Your Move: " << player << " Computer Move: " << computer << endl;
                cout << "You Win!" << endl;

                wins++;
                cout << "Wins: " << wins << " Losses: " << loss << " Ties: " << ties << endl;
            }
            else if(game(player, computer) == 1)
            {
                cout << "Your Move: " << player << " Computer Move: " << computer << endl;
                cout << "You Lost!" << endl;

                loss++;
                cout << "Wins: " << wins << " Losses: " << loss << " Ties: " << ties << endl;
            }
            else
            {
                cout << "Your Move: " << player << " Computer Move: " << computer << endl;
                cout << "You Tied!" << endl;

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

    cout << endl << endl << endl;

    return 0;
}

char computerMove(int choice)
{ 
    char move[] = {'R', 'P', 'S'};

    return move[choice];
}

int game(char you, char computer)
{
    if(((you == 'r' || you == 'R') && computer == 'S') || ((you == 'p' || you == 'P') && computer == 'R') || ((you == 's' || you == 'S') && computer == 'P'))
    {
        return 0;
    }
    else if(((you == 'r' || you == 'R') && computer == 'P') || ((you == 'p' || you == 'P') && computer == 'S') ||((you == 's' || you == 'S') && computer == 'R')) 
    {
        return 1;
    }
    else if(((you == 'r' || you == 'R') && computer == 'R') || ((you == 'p' || you == 'P') && computer == 'P') ||((you == 's' || you == 'S') && computer == 'S'))
    {
        return 2;
    }

    return -1;
}