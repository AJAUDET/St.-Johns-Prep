#include <iostream>
using namespace std;

int main()
{
    string fname, lname;
    int a, b;
    
    //Strings
    cout << "What's your first name: ";
    cin >> fname;
    cout << "What's your last name: ";
    cin >> lname;

    cout << "Hello, " << fname << ' ' << lname << endl;

    //Ints
    cout << "Wanna see a trick?" << endl;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    cout << a << '+' << b << '=' << a + b << endl;



    return 0;
}