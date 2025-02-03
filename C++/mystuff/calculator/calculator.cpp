/*
    calculator.cpp by AJ Audet

    makin a calculator using standard math functions, so base arithmatic, add, subtract, multiply, divide, modulo, 
        power, root, square, sqrt

*/

#include <iostream>
#include <math.h>
using namespace std;

void add(double x, double y)
{
    result = x + y;
}

void subtract(double x, double y)
{
    reuslt = x - y;
}

void multiply(double x, double y)
{
    reuslt = x * y;
}

void divide(double x, double y)
{
    reuslt = x / y;
}

void square(double x)
{
    reuslt = x * x;
}

void power(double x, double y)
{
    reuslt = pow(x, y);
}

void root(double x, double y)
{
    reuslt = x ^ (1/y);
}

void modulo(double x, double y)
{
    reuslt = x % y;
}

void sqRoot(double x)
{
    reuslt = sqrtl(x);
}

int main()
{
    double x, y;
    int control;

    cout << "1. Add, 2. Subtract, 3. Multiply, 4. Divide, 5. Square, 6. Power of, 7. Root of, 8. Modulo, 9. Square Root : ";
    cin >> control;
 
    switch (control)
    {
    case 1:
        cout << "Enter a number: ";
        cin >> x;
        cout << "Enter a number: ";
        cin >> y;
        add(x, y);
        break;
    case 2:

        break;

    case 3: 

        break;

    case 4:
        
        break;
    case 5:

        break;

    case 6: 

        break;

    case 7:
        
        break;

    case 8:

        break;

    case 9: 

        break;

    default:
        cout << "Please Choosse a Function!" << endl;
        break;
    }
}