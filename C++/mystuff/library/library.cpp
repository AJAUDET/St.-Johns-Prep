/*
    library.cpp by AJ Audet

    uh...library making, gonna want to write memory to a file and keep it updating

    cin removes anything after a space sure
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // variable dec for input/output
    string text, update;
    ofstream outFile;

    // pass a string, and the append flag
    //opens the file in append mode
    outFile.open("fics.txt", ios::app);
    
    if(outFile.fail() == true)
    {
        cout << "Error!\n";
        return 1;
    }

    // prompt user input
    cout << "Name and Length: ";

    // using getline to account for spaces for the name and length
    getline(cin, text);

    // prompting for update status
    cout << "Last Updated: ";

    // usage of getline for month/dd/year format
    getline(cin, update);

    outFile << text << ' ' << "Last Updated On: "<< update << endl;
}