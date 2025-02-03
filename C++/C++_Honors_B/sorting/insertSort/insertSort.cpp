/*
    insert sort

Create a function that take an array of 100 random values from 0-999 and sorts them using an insertion sort. 
You will output the unsorted array first and then output the sorted one. Here is the pseudocode for the insertion sort:

for i ← 1 to length(A)

     j ← i

    while j > 0 and A[j-1] > A[j]

          swap A[j] and A[j-1]

          j ← j - 1

     end while

end for
*/

#include <iostream>
using namespace std;

const int size = 100;

void insertionSort(int arr[], int n);

int main()
{
    srand(time(NULL));

    int nums[size];

    // original arraY values
    cout << "Unsorted Array: " << endl;
    for(int i = 0; i < size; i++)
    {
        nums[i] = rand() % 1000;
        cout << nums[i] << endl;
    }

    // sorting here
    insertionSort(nums, size);

    // sorted array
    cout << endl << "Sorted Array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}

void insertionSort(int arr[], int n)
{
    // var dec for loops
    int i, j;
    
    // var dec for saving values
    int key;

    //itterate through array
    for(i = 1; i < n; i++)
    {
        //key needs to be the CURRENT val of the array
        key = arr[i];

        // j is always 1 < than i
        j = i - 1;

        // second loop to sort the values
        while(j>= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
