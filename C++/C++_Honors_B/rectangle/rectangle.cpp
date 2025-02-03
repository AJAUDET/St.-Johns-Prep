/*
    rectangle.cpp by AJ Audet

    make a changeable rectangle

    Write a program where the user is prompted to enter the width and the height of a rectangle, 
    and the program will output the area and the perimeter. Submit the cpp file or the text of your code back here.

        Example of output:

        Enter the width: 7

        Enter the height: 5

        The area is 35

        The perimeter is 24
*/
#include <iostream>
using namespace std;

int main()
{
    int width, height;

    // width
    cout << "Width: "; cin >> width;

    // height
    cout << "Height: "; cin >> height;

    // output
    cout << "Area: " << width * height << endl << "Perimeter: " << width + height * 2 << endl;

    return 0;
}


