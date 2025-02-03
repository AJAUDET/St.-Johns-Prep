#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare a string named "name" and get input with get_string
    string name = get_string("Name: ");
    // declare an int named "age" and get user input with get_int
    int age = get_int("Age: ");
    // declare a float named "gpa" and use get_float to enter a number with a decimal
    float gpa = get_float("GPA: ");
    // declare long named "student_id" and use get_long for input
    long student_id = get_long("Student ID: ");
    // declare a double named "pi" and use get_double to accept user input to 10 decimal places
    double pi = get_double("Number from pi to 10: ");
    // prints a blank line followed by each input value
    printf("\n");
    printf("Hello %s, here is the data you entered...\n", name);
    printf("Student ID: %ld\n", student_id);
    printf("Age: %i\n", age);
    printf("GPA: %.1f\n", gpa);
    printf("The value of pi is %.10f\n", pi);
}
