/*
    grade.cpp by AJ Audet

    finding the grade average of someone, terminates when they input 101

    3 decimal places, controlling the # of decimal places: 
*/

#include <iostream>
#include <iomanip> //library for manipulating input and output
using namespace std;

int main()
{
   double average = 0, grade = 0, sum = 0;
   int divisor = 0;

    // while loop to check conditions
   while (grade <= 100)
   {
        // if statements to check the conditions of grade to continue prompting
        if(grade <= 100)
        {
            cout << "Enter your grade: ";
            cin >> grade;

            sum += grade;

            if(grade > 100)
            {
                divisor--;
                sum -=grade;
            }
            
        }
        divisor++;
   }

    // calculating and printing average
   average = sum / divisor;

    cout << fixed << setprecision(3) << "The average is: " << average << endl;

   return 0;
}

