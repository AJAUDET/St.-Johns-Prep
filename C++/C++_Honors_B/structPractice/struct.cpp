/*
    struct.cpp by AJ Audet

    used to organize variables

    how to make structs

    struct name{
      //any variable associated w/ the struct
    };

    or 

    struct {
        variabels
    } varName, varName...;

    use dot notation to access things in the structure
*/

#include <iostream>
using namespace std;

struct student {
    int classYear;
    double gpa;
    string nickName;
    bool isCool;
};

int main()
{
    student joe;

    cout << "What is the first students nickname?" << endl;
    cin >> joe.nickName;

    cout << joe.nickName << "! What a fun nickname!" << endl;

    cout << "What is " << joe.nickName << "'s class year?" << endl;
    cin >> joe.classYear;
    if(joe.classYear > 2026){
        cout << "Just a baby" << endl;
    }
    else{
        cout << "I see you contain much wisdom" << endl;
    }

    cout << "What is " << joe.nickName << "'s GPA?" << endl;
    cin >> joe.gpa;
    if(joe.gpa <= 4.3){
        cout << "Not getting into MIT this year." << endl;
    }
    else{
        cout << "BC will accept any Prep student with a pulse." << endl;
    }

    cout << "Is " << joe.nickName << " cool? (0 for false, 1 for true)" << endl;
    cin >> joe.isCool;
    if(joe.isCool){
        cout << "Must be in Jave." << endl;
    }
    else{
        cout << "Must be in C++" << endl;
    }

    return 0;
}