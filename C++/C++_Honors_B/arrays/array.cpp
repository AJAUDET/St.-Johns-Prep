/*
    makin arrays cause they arnmt relaly that hard to get, but they run like everything

    my number is 4
*/

#include <iostream>
using namespace std;

const int size = 6; // global var. (avaliable to all functions)

int main()
{
    srand(time(NULL));

    /*
    int grades[size];

    for (int i = 0; i < size; i++)
    {
        grades[i] = rand() % 101;
    }

    for(int i = 0; i < size; i++)
    {
        cout << "Student: " << i+1 << " recieves a " << grades[i] << " for the quarter." << endl;
    }*/

    string menu[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a menu item: ";
        cin >> menu[i];
    }

    cout << "Here is your menu: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << '#' << i+1 << ") " << menu[i] << endl;
    }

    cout << "The special for today is: " << menu[rand() % size] << endl;

    return 0;
}