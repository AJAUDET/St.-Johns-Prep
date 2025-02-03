/*
    2d Arrays yippee

    arr[rows][columns]
*/

#include <iostream>
#include <iomanip>
using namespace std;

int rowSum(int arr[]);

const int ARR_ROWS = 10;
const int ARR_COLS = 10;

int main()
{
    srand(time(NULL));

    int arr[ARR_ROWS][ARR_COLS];

    // inputting values from
    for(int i = 0; i < ARR_ROWS; i++)
    {
        for(int j = 0; j < ARR_COLS; j++)
        {
            arr[i][j] = rand() % 101;
        }
    }

    // outputting values and then the sums of each row
    for(int i = 0; i < ARR_ROWS; i++)
    {
        for(int j = 0; j < ARR_COLS; j++)
        {
            // the largest possible valsue has 3 digits so we offset by 4
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < ARR_ROWS; i++)
    {
        int sum = 0;
        for(int j = 0; j < ARR_COLS; j++)
        {
            sum += arr[i][j];
        }
        cout << "The sum of row " << i + 1<< " is " << sum << endl;
    }
}

// function to sum the values of the row
int rowSum(int arr[])
{
    int sum = 0;
    for(int i = 0; i < ARR_ROWS; i++)
    {
        sum += arr[i];
        return sum;
    }
    return 0;
}