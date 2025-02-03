/*
    structHW.cpp by AJ Audet

    Write a program where you create a struct based on something that you are interested in with at least 4 variables stored in it. 
    In main(), create an instance of that struct and input/output all the variables associated with it. Submit the code back on Canvas.


    uhh...im judging you on how much you read
*/

#include <iostream>
using namespace std;

struct books {
    int numRead;
    char enjoy;
    string leastRecent;
    string mostRecent;
};

int main()
{
    // creating an instance of books to be called
    books book;

    // reading is fun
    cout << "How many books have you read in the past 12 months: ";
    cin >> book.numRead;

    // i haven't had time to read more than 10 books outside of the assigned ones
    if(book.numRead >= 10) 
    {
        cout << "You read more than I did." << endl;
    }
    else
    {
        cout << "Start reading and increase that INT stat." << endl;
    }

    // reading is one of my favorite pass times
    cout << "Do you like reading(y/n): ";
    cin >> book.enjoy;
    if(book.enjoy == 'y'){
        cout << "YAY! Reading is really fun." << endl;
    }
    else{
        cout << "(;__;) That's kinda sad tbh..." << endl;
    }

    // most recent book is "A Court of Silver Flames"
    cout << "What's your most recent book read(use a '_' in place of spaces): ";
    cin >> book.mostRecent;

    // first book I read this year was "Dante's Inferno"
    cout << "What's the first book you read this year(use a '_' in place of spaces): ";
    cin >> book.leastRecent;

    if (book.enjoy == 'y'){
        cout << "So you've read " << book.numRead << " books. You enjoy reading, your most recent book read is " << book.mostRecent << " . Your first recent book read this year was " << book.leastRecent << endl;
    }
    else{
        cout << "So you've read " << book.numRead << " books. You don't reading (;__;), your most recent book read is " << book.mostRecent << " . Your first book read this year was " << book.leastRecent << endl;
    }

    return 0;
}