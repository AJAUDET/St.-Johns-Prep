#include <iostream>
using namespace std;

void drawSquare(int width, int height);

int width, height;

int main()
{
    width = 0;
    height = 0;

    cout << "Width: ";
    cin >> width;

    cout << "Heigth: ";
    cin >> height;

    drawSquare(width, height);

    return 0;
}

void drawSquare(int width, int height)
{
    for (int i = 0; i < width; i++)
    {
        cout << '#';
        for (int ii = 0; ii < height; ii++)
        {
            cout << '#' << endl;
        }
    }
}