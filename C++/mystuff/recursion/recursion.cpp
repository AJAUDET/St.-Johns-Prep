#include <iostream>
using namespace std;

int sum(int k);
long exponent(int base, int power);

int main()
{
    int result = sum(10);
    cout << result << endl;

    long num = exponent(7, 5);
    cout << num << endl;
    
    return 0;
}

// recursion has the function call itself
int sum(int k)
{
    if(k > 0)
    {
        return k + sum(k - 1);
    }
    else{
        return 0;
    }
}

long exponent(int base, int power)
{
    if(power == 1)
    {
        return base;
    }
    return base * exponent(base, power - 1);
}