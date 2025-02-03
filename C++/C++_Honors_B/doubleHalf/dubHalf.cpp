/*
    dubHalf.cpp by AJ Audet

     You will have the user input a number (double)

- The user will then call a function that BOTH doubles that number and halves it, returning both the doubled and halved value.

- The user will then output the doubled and halved values.

- Input and output will ONLY be in main().

 

Example:

Enter a number: 17

Your number doubled is 34

Your number halved is 8.5
*/

#include <iostream>
using namespace std;

void dubHalf(double & x, double & y);

int main()
{
    // variable declaration
    double num = 0, temp = 0;

    // user input
    cout << "Enter a number: ";
    cin >> num;

    // assigning the value of num to temp to track
    temp = num;

    dubHalf(num, temp);

    // output
    cout << "Your number doubled is " << num << endl;

    cout << "Your number halved is " << temp << endl;

    return 0;
}

// & to replace the keyword return for void functions
void dubHalf(double & x, double & y)
{
    x *= 2;

    y /= 2;
}