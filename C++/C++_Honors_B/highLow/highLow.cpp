/*
    highLow.cpp by AJ Audet

    Write a function FindLoHi() that takes two int values and returns the lesser of the two as its third parameter and the greater of the two as its fourth parameter. All input and output will be in your main function. Use the function prototype:

    void FindLoHi(int x, int y, int &Lo, int &Hi)

    

    Example 1:

    Enter your first number: 19

    Enter your second number: 35

    Your low number is 19

    Your high number is 35

    

    Example 2:

    Enter your first number: 70

    Enter your second number: 68

    Your low number is 68

    Your high number is 70
*/

#include <iostream>
using namespace std;

void highLow(int num1, int num2, int &low, int &high);

int main()
{
    //variables
    int num1 = 0, num2 = 0, low = 0, high = 0;

    // prompt for input
    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    // function call 
    highLow(num1, num2, low, high);

    //output
    cout << "Your low number is: " << low << endl;
    cout << "Your high number is: " << high << endl;

    return 0;
}

void highLow(int num1, int num2, int & low, int & high)
{
    // checking conditions for var. assignment
    if(num1 < num2)
    {
        low = num1;
        high = num2;
    }
    else
    {
        low = num2;
        high = num1;
    }
}