/*
    vigenere.cpp by AJ Audet

    same old same old 😀 yk vigenere cypher

    womp womp
*/
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

// putting the assignment of key len function up top cause i feel like it
// i really dont want to do a prototype
string generateKey(string text, string key)
{
    int x = text.size();

    for (int i = 0;; i++)
    {
        if (x == i)
        {
            i == 0;
        }
        // if they are the same size we have to stop the loop
        if (key.size() == text.size())
        {
            break;
        }
        // gotta add another char to the key, so we dont have a segmentation fault
        key.push_back(key[i]);
    }
    return key;
}

// encryption function
string encrypt(string text, string key)
{
    string cypherText;
    for (int i = 0; i < text.size(); i++)
    {
        // check lowercase, then upper
        if (islower(text[i]))
        {
            char x = (text[i] + key[i]) % 26;
            x += 'a';
            cypherText.push_back(x);
        }
        else
        {
            char x = (text[i] + key[i]) % 26;
            x += 'A';
            cypherText.push_back(x);
        }
    }
    return cypherText;
}

int main()
{
    // variable declararion
    string text, prompt1 = "Enter a message: ", prompt2 = "Enter a key: ", keyword, key, cyph_txt;

    // user input prompts
    cout << prompt1;
    cin >> text;
    cout << prompt2;
    cin >> keyword;

    // variable assignment
    key = generateKey(text, keyword);
    cyph_txt = encrypt(text, key);

    // output
    cout << "Key: " << key << endl;
    cout << "Original Message: " << text << endl;
    cout << "Encrypted Message: " << cyph_txt << endl;
}
