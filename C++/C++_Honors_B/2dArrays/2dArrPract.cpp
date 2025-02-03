/*
    2d Arrays yippee

    arr[rows][columns]
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int ARR_ROWS = 5;
const int ARR_COLS = 7;

int main()
{
    srand(time(NULL));

    int arr[ARR_ROWS][ARR_COLS];

    // inputting a random num for the array
    for(int i = 0; i < ARR_ROWS; i++)
    {
        for(int j = 0; j < ARR_COLS; j++)
        {
            arr[i][j] = rand() % 101;
        }
    }

    // anothrer for loop for outputting the array
    for(int i = 0; i < ARR_ROWS; i++)
    {
        for(int j = 0; j < ARR_COLS; j++)
        {
            //setw(num) set width between things
                // always do one more than the largest value so: 100 means a setw(4), 99 means a setw(3)
           cout << setw(4) << arr[i][j];
        }
    cout << endl;
    }
}