#include <iostream>
using namespace std;

void changer(double & x, double y, double & z);

int main()
{
    double num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    changer(num1, num2, num3);

    cout << "Your new num1 is " << num1 << endl;

    cout << "Your new num2 is " << num2 << " Womp Womp shoudve passed by reference" << endl;

    cout << "Your new num3 is " << num3 << endl;

    return 0;
}

void changer(double & x, double y, double & z) // need the & to pass by reference for void
{
    x *= 3.7;

    y /=3;

    z += 3.5;
}