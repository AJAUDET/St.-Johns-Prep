#include <iostream>
using namespace std;

int main()
{
    // staircase method
    srand(time(NULL));

    int grade = (rand() % 101);

    cout << "Your grade for the semester is: " << grade << endl;

    return 0;
}