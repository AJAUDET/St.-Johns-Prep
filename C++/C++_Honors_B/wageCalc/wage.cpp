/*
    wage.cpp by AJ Audet

    makin a wage calculator on how much salary you make per week, more than 40 hours is time and a half

    to calc time and a half 1.5(wage)
*/  

#include <iostream>
using namespace std;

int main()
{
    int hourlyWage, hoursWorked, overtimeHours, baseHours = 40;
    double weeklyPayout, otPayout, otPay;
    char approvedOT;

    // hours worked
    cout << "Enter the numbrt of hours worked: ";
    cin >> hoursWorked;

    // wage
    cout << "Enter your wage: ";
    cin >> hourlyWage;

    if(hoursWorked > 40)
    {
        cout << "Were you approved for overtime (y for yes, n for no)? ";
        cin >> approvedOT;
        if(approvedOT == 'y')
        {
            overtimeHours = hoursWorked - baseHours;
            otPay = (hourlyWage * 1.5);
            otPayout = (otPay * overtimeHours);
            weeklyPayout = ((hourlyWage * baseHours) + otPayout);
            cout << "You made " << weeklyPayout << " this week!" << endl;
        }
        else
        {
            overtimeHours = 0;
            otPay = (hourlyWage * 1.5);
            otPayout = (otPay * overtimeHours);
            weeklyPayout = (hourlyWage * hoursWorked) + otPayout;
            cout << "You made " << weeklyPayout << " this week!" << endl;

        }
    }
    else
    {
        weeklyPayout = hourlyWage * hoursWorked;
        cout << "You made " << weeklyPayout << " this week!" << endl;
    }

    return 0;
}