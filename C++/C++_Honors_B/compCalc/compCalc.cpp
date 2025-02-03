/*
    Complex number calculator

    This project is the create a complex
number calculator that:
• Adds
• Subtracts
• Divides
• Multiplies
• Finds the length
• Get new inputs

Required Functions:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Length
6. Input
7. Output

    Formulas:

        Length = sqrt ((a * a) + (b * b))
        Addition: (A + Bi) + (C + Di) = (A + C) + (B + D)i
        Subtraction: (A + Bi) - (C + Di) = (A - C) + (B + D)i
        Multiplication: (A + Bi)(C + Di) = (AC - BD) + (BC - AD)i
        Division: (A + Bi)/(C + Di) = ((AC + BD)/(CC + DD)) + ((BC - AD)/(CC + DD))i
        Length: x = |z| = sqrt(XX + YY);


*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// prototypes go here
void input(double & A /*passing by ref*/, double & B);
void output(double A, double B);
void addition(double & A, double & B, double C, double D);
void subtraction(double & A, double & B, double C, double D);
void multiplication(double & A, double & B, double C, double D);
void division(double & A, double & B, double C, double D);
double getLength(double A, double B);


int main()
{	
	char choice = '\0';
	double A = 0; // keeps track of the current real value
	double B = 0; // keeps track of the current imaginary value
	double C = 0; // the real value to +, -, *, or /
	double D = 0; // the imaginary value to +, -, *, or /
    double length = 0; // keeps track of the length of A & Bi

	cout << "Welcome to the Complex Number Calculator!" << endl;
	cout << "Here are your options: " << endl;
	cout << "+ (addition)" << endl;
	cout << "- (subtraction)" << endl;
	cout << "* (multiplication)" << endl;
	cout << "/ (division)" << endl;
	cout << "l (length)" << endl;
	cout << "i (new input)" << endl;
	cout << "q (quit)" << endl;
	
	while(choice != 'q')
	{
		cout << "Enter what you want to do: ";
		cin >> choice;
		
		switch(choice)
		{
			case 'i':
            // input(A,B) 
                input(A, B);

            // output(A,B)
                output(A, B);

				break;

			case '+':
                // input(C,D)
                    cout << "Enter the Real Part: ";
                    cin >> C;

                    cout << "Enter the Imaginary Part: ";
                    cin >> D;

                // addition(A, B, C, D)
                    addition(A, B, C, D);

                // output(A, B)
                output(A, B);

				break;

            case '-':
                // input(C,D)
                    cout << "Enter the Real Part: ";
                    cin >> C;

                    cout << "Enter the Imaginary Part: ";
                    cin >> D;

                // subtraction(A, B, C, D)
                    subtraction(A, B, C, D);

                // output(A, B)
                output(A, B);
                break;

            case '*':
                // input(C,D)
                    cout << "Enter the Real Part: ";
                    cin >> C;

                    cout << "Enter the Imaginary Part: ";
                    cin >> D;

                // multiplication(A, B, C, D)
                    multiplication(A, B, C, D);

                // output(A, B)
                    output(A, B);

                break;

            case '/':
                // input(C,D)
                    cout << "Enter the Real Part: ";
                    cin >> C;

                    cout << "Enter the Imaginary Part: ";
                    cin >> D;

                // division(A, B, C, D)
                    division(A, B, C, D);

                // output(A, B)
                    output(A, B);

                break;

            case 'l':
                // length(A, B)
                    length = getLength(A, B);

                // output(A, B)
                    cout << "Length: " << length << endl;
                    output(A, B);
                break;
				
			case 'q':
				cout << "Thanks for using our calculator!" << endl;
				break;	
			default:
				cout << "Not a valid choice!" << endl;
				break;
		}
	}
	
	return 0;
}

// function definitions

void input(double & A, double & B)
{
    // prompt for real
    cout << "Enter the Real Part: ";
    cin >> A;

    //prompt for imaginary
    cout << "Enter the Imaginary Part: ";
    cin >> B;

    A = A;
    B = B;
}

void output(double A, double B)
{
    cout << fixed << setprecision(3) << "Current Value: " << A << " + " << B << 'i' << endl;
}

void addition(double & A, double & B, double C, double D)
{
    // formula: (A + Bi) + (C + Di) = (A + C) + (B + D)i
    A = A + C;
    B = B + D;
}

void subtraction(double & A, double & B, double C, double D)
{
    // formula: (A + Bi) - (C + Di) = (A - C) + (B + D)i
    A = A - C;
    B = B + D;
}

void multiplication(double & A, double & B, double C, double D)
{
    // formula (A + Bi)(C + Di) = (AC - BD) + (BC - AD)i
    double val = A;

    A = (A * C - B * D);
    B = (B * C - val * D);
}

void division(double & A, double & B, double C, double D)
{
    // Formula: (A + Bi)/(C + Di) = ((AC + BD)/(CC + DD)) + ((BC - AD)/(CC + DD))i
    double val = A;

    A = ((A * C + B * D) / (C * C + D * D));
    B = ((B * C - val * D) / (C * C + D * D));
}

double getLength(double A, double B)
{
    // Formula length = |z| = sqrt(X^2 + Y^2)
    return sqrt((A * A) + (B * B));
}
