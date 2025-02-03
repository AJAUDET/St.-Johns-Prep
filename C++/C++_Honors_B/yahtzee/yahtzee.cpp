/*
    yahtzee.cpp by AJ Audet

    WE MAKIN YAHTZEE... in the most inneficient way possible... kinda
*/

#include <iostream>
using namespace std;

const int size = 5;

// prototypes
void sortDice(int arr[], int n);

// roll type and result
bool checkThree(int arr[]);
bool checkFour(int arr[]);
bool checkFullHouse(int arr[]);
bool checkYahtzee(int arr[]);
bool checkLgStr(int arr[]);
bool checkSmStr(int arr[], int n);
bool checkChance(int arr[]);

// point calc for nothing and choice
int diceSum(int arr[], int n);

int main()
{
    //introduce randomness for the dice
    srand(time(NULL));

    char answer = ' ';

    // array to store values of the dice
    int dice[size];

    // bool conditionals
    bool threeUsed = false;
    bool fourUsed = false;
    bool fullHouseUsed = false;
    bool largeUsed = false;
    bool smallUsed = false;
    bool chanceUsed = false;
    bool yahtzeeUsed = false;

    // var to store choices / points
    int totalPoints = 0;
    int points = 0;

    cout << "Do you want to play Yahtzee(y/n): ";
    cin >> answer;

    if(answer == 'y' || answer == 'Y')
    {
        int turns = 7;
        do
        {       
            // unsorted dice
            cout << "Unsorted Dice: ";
            for(int i = 0; i < size; i++)
            {
                dice[i] = (rand() % 6) + 1;
                cout << dice[i] << " ";
            }
            cout << endl;
            
            // sorting dice
            sortDice(dice, size);

            cout << "Sorted Dice: ";
            for(int i = 0; i < size; i++)
            {
                cout << dice[i] << " ";
            }
            cout << endl;

            // check type of "hand" and give it a number
            if(checkChance(dice) && !chanceUsed) 
            {
                chanceUsed = true;
                cout << "You used the Chance Column!" << endl;
                points = diceSum(dice, size);
                cout << "You scored " << points << " points!" << endl;

                totalPoints += points;
            }
            else if(checkFour(dice) && !fourUsed)
            {
                fourUsed = true;
                cout << "You rolled a Four of a Kind!" << endl;
                points = diceSum(dice, size);
                cout << "You scored " << points << " points!" << endl;

                totalPoints += points;
            }
            else if(checkFullHouse(dice) && !fullHouseUsed)
            {
                fullHouseUsed = true;
                cout << "You rolled a Full House!" << endl;
                points = 25;
                cout << "You scored " << points << " points!" << endl;

                totalPoints += points;
            }
            else if(checkLgStr(dice) && !largeUsed)
            {
                largeUsed = true;
                cout << "You rolled a Large Straight!" << endl;
                points = 40;
                cout << "You scored " << points << " points!" << endl;

                totalPoints += points;
            }
            else if(checkSmStr(dice, size) && !smallUsed)
            {
                smallUsed = true;
                cout << "You rolled a Small Straight!" << endl;
                points = 30;
                cout << "You scored " << points << " points!" << endl;

                totalPoints += points;
            }
            else if(checkThree(dice) && !threeUsed)
            {
                threeUsed = true;
                cout << "You rolled a Three of a Kind!" << endl;
                points = diceSum(dice, size);
                cout << "You scored " << points << " points!" << endl;

                totalPoints += points;
            }
            else if(checkYahtzee(dice) && !yahtzeeUsed)
            {
                yahtzeeUsed = true;
                cout << "You rolled a YAHTZEE!" << endl;
                points = 50;
                cout << "You scored " << points << " points!" << endl;

                totalPoints += points;
            }
            else{
                cout << "You rolled Nothing!" << endl;
                points = diceSum(dice, size);
                cout << "You scored " << points << " points!" << endl;

                totalPoints += points;
            }
            cout << "You have a total of " << totalPoints << " points!" << endl;

            turns--;
        }while(turns > 0);
    }
    else{
        cout << "Bye Bye!" << endl;
    }

    return 0;
}

void sortDice(int arr[], int n)
{
    // var dec for loops
    int i, j;
    
    // var dec for saving values
    int key;

    //itterate through array
    for(i = 1; i < n; i++)
    {
        //key needs to be the CURRENT val of the array
        key = arr[i];

        // j is always 1 < than i
        j = i - 1;

        // second loop to sort the values
        while(j>= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// functions to check if the roll is a certain hand
bool checkThree(int arr[])
{
    if(arr[0] == arr[2] || arr[1] == arr[3] || arr[2] == arr[4])
    {
        return true;
    }
    return false;
}

bool checkFour(int arr[])
{
    if(arr[0] == arr[3] || arr[1] == arr[4])
    {
        return true;
    }
    return false;
}

bool checkFullHouse(int arr[])
{
    if((arr[0] == arr[1] && arr[2] == arr[4]) || (arr[0] == arr[2] && arr[3] == arr[4]))
    {
        return true;
    }
    return false;
}

bool checkYahtzee(int arr[])
{
    if(arr[1] == arr[4])
    {
        return true;
    }
    return false;
}

bool checkLgStr(int arr[])
{
    // lg str8 cannot have any repeats
    // 1 2 3 4 5 or 2 3 4 5 6
    if(arr[0] <= 2)
    {
        if(arr[0] == 1 && arr[1] == arr[0] + 1 && arr[2] == arr[1] + 1 && arr[3] == arr[2] + 1 && arr[4] == arr[3] + 1)
        {
            return true;
        }
        else if(arr[0] == 2 && arr[1] == arr[0] + 1 && arr[2] == arr[1] + 1 && arr[3] == arr[2] + 1 && arr[4] == arr[3] + 1)
        {
            return true;
        }
    }
    return false;
}

bool checkSmStr(int arr[], int n)
{
    int ones = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixes = 0;

    // any combination of 1 2 3 4 // 2 3 4 5 // 3 4 5 6 = 930 combinations
    if(arr[0] <= 3 && arr[4] >= 4)
    {
        // tallying each ammount of a value
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                ones++;
            }
            else if(arr[i] == 2)
            {
                twos++;
            }
            else if(arr[i] == 3)
            {
                threes++;
            }
            else if(arr[i] == 4)
            {
                fours++;
            }
            else if(arr[i] == 5)
            {
                fives++;
            }
            else if(arr[i] == 6)
            {
                sixes++;
            }
        }
        // if any of the numbers have an ammount greater than 2 it is not a small straight
        if(ones > 2 || twos > 2 || threes > 2 || fours > 2 || fives > 2 || sixes > 2)
        {
            return false;
        }
        else if(ones <= 2 && twos >=1 && threes >= 1 && fours >=1)
        {
            return true;
        }
        else if(twos <= 2 && threes >= 1 && fours >= 1 && fives >= 1 && sixes >= 1)
        {
            return true;
        }
        else if(threes <= 2 && fours >= 1 && fives >= 1 && sixes >= 1)
        {
            return true;
        }
        else{
            return false;
        }

    }
    return false;
}

bool checkChance(int arr[])
{
    char choice = ' ';
    cout << "Do you want to use the Chance column(y/n)? ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int diceSum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
