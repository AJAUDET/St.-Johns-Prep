/*
    makin a guessing game that uses a user defined function

    guess.cpp by AJ Audet
*/

#include <iostream>
using namespace std;

string getHint(int guess, int number);

int main()
{
    // introducing randomness to generate a rnadom number for each attempt
    srand(time(NULL));

    // variable declaration to track user guess and random number(1 - 100)
    int guess = 0, number = (rand() % 100) + 1;
    char response;

    // prompt user to play the game
    cout << "Do you want to play a game?(y/n) ";
    cin >> response;

    do
    {
        if(response == 'y' || response == 'Y')
        {
                // checking if they got the number or not

                cout << "Enter a guess: ";
                cin >> guess;

                if(getHint(guess, number) == "Too High! Try again!")
                {
                    cout << getHint(guess, number) << endl;
                }
                else if(getHint(guess, number) == "Too Low! Try again!")
                {
                    cout << getHint(guess, number) << endl;
                }
                else if(getHint(guess, number) == "You got it!")
                {
                    cout << getHint(guess, number) << endl;
                    break;
                }
        }
        else if(response == 'n' || response == 'N')
        {
            break;
        }
    }
    while(guess != number);

    if(guess == number)
    {
        cout << "You win!" << endl;
    }

    return 0;
}

string getHint(int guess, int number)
{
    // guess greater than number
    if(guess > number)
    {
        return "Too High! Try again!";
    }
    //guess less than number
    else if(guess < number)
    {
        return "Too Low! Try again!";
    }
    // guess is the number
    else if(guess == number)
    {
        return "You got it!";
    }
    return "";
}