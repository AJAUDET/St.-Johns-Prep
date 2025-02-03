/*
Create an array of size 50 that will store integers.
Fill the array with random numbers from 0 to 100 and output them all using a loop.
Go through the array using another loop and count the number of even numbers & count the number of odd numbers in the array.
Output the total number evens and the total number of odds.
*/

#include <iostream>
using namespace std;

const int size = 50;

int main()
{
    // introduce randomness
    srand(time(NULL));

    // variable dec for even + odd
    int even = 0;
    int odd = 0;

    // declaration
    int numbers[size];

    //assignment
    for(int i = 0; i < size; i++)
    {
        numbers[i] = rand() % size;
    }

    //Output
    //using a for-each loop to output all the numbers in the array
    for(int i : numbers)
    {
        cout << numbers[i] << endl;
    }

    //tallying even and odd numbers
    for(int i = 0; i < size; i++)
    {
        if(numbers[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;    
        }
    }

    cout << "There are " << even << " evens." << endl << "There are " << odd << " odds." << endl;

    return 0;
}