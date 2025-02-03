/*
    carfix.cpp by AJ Audet

    figuring out if cars are defective based on their model number

    Cars with model numbers 119, 179, 189 through 195, 221, and 780 have been found to have this defect.

*/

#include <iostream>
using namespace std;

int main()
{
    int modelNum;

    do
    {
        cout << "Enter your model number, enter 0 if done: ";
        cin >> modelNum;

        if(modelNum == 119)
        {
            cout << "Your car is defective. Please have it fixed." << endl;
        }
        else if(modelNum == 179)
        {
            cout << "Your car is defective. Please have it fixed." << endl;
        }
        else if(modelNum <= 195 && modelNum >= 189)
        {
            cout << "Your car is defective. Please have it fixed." << endl; 
        }
        else if(modelNum == 221)
        {
            cout << "Your car is defective. Please have it fixed." << endl; 
        }
        else if(modelNum == 780)
        {
            cout << "Your car is defective. Please have it fixed." << endl; 
        }
        else
        {
            cout << "Your car is OK." << endl; 
        }

    }
    while(modelNum != 0);

    cout << "Program complete." << endl;

    return 0;
}