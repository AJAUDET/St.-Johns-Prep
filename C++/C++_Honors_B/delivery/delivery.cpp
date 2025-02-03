/*
    delivery.cpp by AJ Audet

    makin a delivery service

    input dimentions(L, W, H), use meters, and weight use kg, output if too large or too heavy or both

    constraints: no more than 27 kilograms, or larger than 0.1 cubic meters
*/

#include <iostream>
using namespace std;

// declaring constants because of our constraints for this project
const int maxWeight = 27;

const double cubicMeterMax = 0.1;

int main()
{
    double weight, height, length, width, volume;

    // ask for weight(kg)
    cout << "Enter weight of package in kilograms: ";
    cin >> weight;


    // ask for dimensions(m)
    cout << "Enter length of package in meters: ";
    cin >> length;

    cout << "Enter width of package in meters: ";
    cin >> width;

    cout << "Enter height of package in meters: ";
    cin >> height;

    // volume
    volume = (width * height * length);

    // output
    if((volume > cubicMeterMax) && (weight > maxWeight))
    {
        cout << "Rejected: Too heavy and too large " << endl;
        return 1;
    }
    else if((weight > maxWeight ) && (volume < cubicMeterMax))
    {
        cout << "Rejected: Too Heavy" << endl;
        return 1;
    }
    else if((weight < maxWeight )&& (volume > cubicMeterMax))
    {
        cout << "Rejected: Too Large" << endl;
    }
    else
    {
        cout << "Package Accepted!" << endl;
        return 0;
    }

    return 0;
}