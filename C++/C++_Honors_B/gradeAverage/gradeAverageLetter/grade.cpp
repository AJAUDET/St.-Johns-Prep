/*
    grade.cpp by AJ Audet

    finding the grade average of someone, terminates when they input 101

    3 decimal places, controlling the # of decimal places: 

    adding in function to output letter grade
*/

#include <iostream>
#include <iomanip> //library for manipulating input and output
using namespace std;

char letterGrade(double grade);

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

    cout << "Letter Grade: " << letterGrade(average) << endl;

   return 0;
}

char letterGrade(double grade)
{
    if(grade >= 90 && grade <= 100)
    {
        return 'A';
    }
    else if(grade >= 80 && grade < 90)
    {
        return 'B';
    }
    else if(grade >= 70.5 && grade < 80)
    {
        return 'C';
    }
    else if(grade >= 70 && grade < 70.5)
    {
        return 'D';
    }
    else
    {
        return 'F';
    } 
}