/*
    slot.cpp by AJ Audet

    making a slot machine, yk 🎰🎰🎰, the best game

    using rand seems appropriate or yk i love "fixed" percentages "2% droprates(Warframe)"

    make an array of possible values use it 3 times
*/
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // introducing randomness
    srand(time(NULL));

    // array of the symbols 
    char result[] = {'1', '2', '3'};

    // starting tokens: 100
    int tokens = 100;

    //declaration of fun variables for gambling 
    char symbol1, symbol2, symbol3, answer;

    // do while cause i want to make my life easy
    // yk forever loop type beat
    do
    {
        cout << "You have " << tokens << " tokens. Pull(Y/N)?";
        cin >> answer;
        if(answer == 'Y' || answer == 'y')
        {
            //initialization of variables
            // & for randomness every time 'y' is pressed
            tokens--;
            symbol1 = result[rand() % 3];
            symbol2 = result[rand() % 3];
            symbol3 = result[rand() % 3];

            //output yippee
            cout << '[' << symbol1 << ']' << '[' << symbol2 << ']' << '[' << symbol3 << ']' << endl;
            
            //checking to see if all symbols are the same
            if(symbol1 == '1' && symbol2 == '1' && symbol3 == '1')
            {
                // >:3 luck
                tokens += 4;
                cout << "You won 4 tokens!" << endl;
            }
            else if(symbol1 == '2' && symbol2 == '2' && symbol3 == '2')
            {
                //do better
                tokens += 8;
                cout << "You won 8 tokens!" << endl;
            }
            else if(symbol1 == '3' && symbol2 == '3' && symbol3 == '3')
            {
                //the best outcome
                //*in Dante's voice* JACKPOT
                tokens += 12;
                cout << "You won 12 tokens!" << endl;
            }
            else
            {
                // 99.99% of gamblers quit before they win big
                //you lost the 50/50 pull again
                cout << "You Lost!" << endl;
            }
        }
        else if(answer == 'N' || answer == 'n')
        {
            // womp womp quitter mentality
            cout << "Thanks for playing!" << endl;
            break;
        }
    }
    while(tokens != 0);

    if(tokens == 0)
    {
        cout << "Play when you have more money" << endl;
    }

    return 0;
}
