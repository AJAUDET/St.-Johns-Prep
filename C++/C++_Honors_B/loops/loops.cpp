/*
    loops.cpp by AJ Audet

    loop practice
*/

#include <iostream>
using namespace std;

int main()
{
    // for loop outputting 1-100
    /* for (int i = 1; i < 101; i++)
    {
        cout << i << " ";
        if(i % 10 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
    */

   // while loop that gives you compliments until you want it to stop

    srand(time(NULL));
    int compliment;
    char option;

    cout << "Do you want a compliment? (y/n)" << endl;
    cin >> option;
    
    while(option == 'y')
    {
        compliment = rand() % 5;

        if(compliment == 0)
        {
            cout << "You have a face for radio!" << endl;
        }
        else if(compliment == 1)
        {
            cout << "You seem like a great listener, even with your airpods in!" << endl;
        }
        else if(compliment == 2)
        {
            cout << "Happy Chaos mix is unfair!" << endl;
        }
        else if(compliment == 3)
        {
            cout << "OMG I love elmers glue!" << endl;
        }
        else
        {
            cout << "TOTSUGEKI!" << endl;
        }

		cout << "Do you want another compliment? (y/n)" << endl;
		cin >> option;
    }



    return 0;
}