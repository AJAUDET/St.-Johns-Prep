/*
    recursion.cpp by AJ Audet

    FATCORIALS yay gonna end it all, had enough of these in calculus
*/

#include <iostream>
using namespace std;

long factorial(int num);

int main()
{
    int num = 0;
    cout << "Enter a number to find it's factorial: ";
    cin >> num;

    int result = factorial(num);

    cout << "The factorial of " << num << " is " << result << endl;
}

long factorial(int num)
{
    if(num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}