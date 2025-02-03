/*
    fizzBuzz.cpp by AJ Audet

    if divizible by 3 say fizz, divisible by 5 say buzz, by both 3 && 5 say fizzbuzz
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i < 100)
    {
        if ((i % 3 == 0 ) && (i % 5 == 0))
        {
            cout << "FizzBuzz" << endl;
            i++;
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
            i++;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
            i++;
        }
        else
        {
            cout << i << endl;
            i++;
        }
    }
}