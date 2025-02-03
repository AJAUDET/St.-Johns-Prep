/*
    makin functions i guess
    
    by aj audet
*/

#include <iostream>
using namespace std;

int add(int x, int y); // prototype
bool coinFlip1(int coin);
string coinFlip2(int coin);
void coinFlip3(int coin);

int main()
{
    int num1, num2;

    srand(time(NULL));

    cout << "Number 1: ";
    cin >> num1;

    cout << "Number 2: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " is: " << add(num1, num2) << endl;
    
    //v.1 of coin flip
        // calling bool functions

    cout << endl << "Flipping Coin #1: ";

    if(coinFlip1(rand() % 2) == true)
    {
        cout << "Heads";
    }
    else
    {
        cout << "Tails";
    }

    //v.2 of coin flip
        //calling string functions

    cout << endl << "Flipping Coin #2: ";

   
    cout << coinFlip2(rand() % 2) << endl;

    //v.3 of coin flip
        //calling void functions

    cout << "Flipping coin #3: ";

    coinFlip3(rand() % 2);

    return 0;
}

int add(int x, int y) // definition
{
    int sum = x + y;

    return sum;
}

bool coinFlip1(int coin)
{
    if(coin % 2 == 0)
    {
        return true;
    }

    return false;
}

string coinFlip2(int coin)
{
    if(coin == 0)
    {
        return "Heads";
    }

    return "Tails";
}

void coinFlip3(int coin)
{
    if(coin == 0)
    {
        cout << "Heads" << endl;
    }
    else
    {
        cout << "Tails" << endl;
    }
}