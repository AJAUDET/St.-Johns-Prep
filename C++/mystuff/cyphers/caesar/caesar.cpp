/*
    caesar.cpp by AJ Audet

    this is an adaption of the C caesar program in C++

    encryption: E[i] = (x[i] + n) % alph_len

    its a caesar cypher, so yk fixed values and all that
*/

#include <iostream>
using namespace std;


//create a constant for the alophabet length
const int alphlen = 26;


// standard caesar encryption method, indec and iterate through message
string encrypt(string text, int shift)
{
    string cypher = "";

    // this is the tried and true for loop
    for (int i = 0; i < text.length(); i++)
    {
        if(islower(text[i]))
        {
            cypher += (char)((((int)text[i] - 97 + shift) % alphlen) + 97);
        }
        else
        {
            cypher += (char)((((int)text[i] - 65 + shift) % alphlen) + 65);
        }
    }
    return cypher;
}

int main()
{
    string text, prompt1 = "Enter a message: ", prompt2 = "Enter a shift value: ";
    int shift;
    cout << prompt1;
    cin >> text;
    cout << prompt2;
    cin >> shift;
    cout << "Message: " << text << endl;
    cout << "Shift: " << shift << endl;
    cout << "Encrypted: " << encrypt(text, shift) << endl;
    return 0;
}
