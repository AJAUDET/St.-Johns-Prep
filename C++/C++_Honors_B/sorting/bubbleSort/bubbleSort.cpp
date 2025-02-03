/*
    sorting algorithms
*/

#include <iostream>
using namespace std;

const int size = 100;

void bubbleSort(int arr[], int n);
void swapVal(int & a, int & b);

int main()
{
    srand(time(NULL));

    int nums[size];

    cout << "Unsorted Array: " << endl;
    for(int i = 0; i < size; i++)
    {
        nums[i] = rand() % 1000;
        cout << nums[i] << endl;
    }

    // sorting alg
    bubbleSort(nums, size);

    cout << "Sorted Array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}

void bubbleSort(int arr[], int n)
{
    // see if the val is swapped
    bool swapped = true;

    // actual swapping
    while(swapped)
    {
        swapped = false;
        for(int i = 0; i < n - 1; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                // swap values
                swapVal(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

    }
}

void swapVal(int & a, int & b)
{
    // temp val to store a
    int temp = a;

    // swapping the values
    a = b;
    b = temp;
}