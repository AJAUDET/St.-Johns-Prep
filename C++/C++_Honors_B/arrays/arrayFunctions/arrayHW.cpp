/*
    functions with arrays practice

    	
For this assignment, you will be using arrays in another way. For this assignment, you will:

Create an array of size 10 and fill it with random number from 1-100 and output it in main().
Ask the user to input a multiplier in main().
Take the existing array and change the entire array using the multiplier IN A FUNCTION.
MUST USE A FUNCTION TO DO THIS
Output the new multiplied array in main().

*/

#include <iostream>
using namespace std;

//global var for size control
const int size = 10;

// prototype
void arrayMult(int array[size], int multVal);

int main()
{
    // introducing randomness for all the values
    srand(time(NULL));

    // array creation, variable declaration
    int nums[size];
    int multVal = 0;

    //val assignment for all elemnts
    for(int i = 0; i < size; i ++)
    {
        nums[i] = (rand() % 100) + 1;
    }

    // original array output
    cout << "Original Array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }

    //prompt for user input
    cout << "Enter a multiplier for the array: ";
    cin >> multVal;
    
    // function call
    arrayMult(nums, multVal);
    
    // new array output
    cout << "New Array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}

// function def for the multiplication
void arrayMult(int arr[size], int multVal)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * multVal;
    }
}