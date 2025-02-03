/*
    makin the fibonacci sequence
*/

#include <iostream>
using namespace std;


int main()
{
    // variables to store initial values and how far the user wants to go in the sequence
    int firstPosNum = 0, secPosNum = 1, fiboSequence, fiboRes;
    cout << "How far in the sequence do you want to go: ";
    cin >> fiboSequence;
    
    cout << "Fibonacci Sequence: ";
    // for loop to find out how far to go in the sequence
    for(int i = 1; i <= fiboSequence; i++)
    {
        // if statements to check if the first and second values are 0 and 1
        if(firstPosNum == 0 && secPosNum == 1)
        {
            cout << firstPosNum << ", ";
        }
        if(secPosNum == 1 && firstPosNum == 1)
        {
            cout << secPosNum << ", ";
        }
        // update values accordingly to complete fibonacci sequence
        fiboRes = firstPosNum + secPosNum;
        firstPosNum = secPosNum;
        secPosNum = fiboRes;

        cout << fiboRes << ", ";
    }
    return 0;
}