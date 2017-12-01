//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment 4 /mathematics.cpp 
/// @brief Assignment/Lab 1 for CS 10 <winter 2013>
///
/// @author Jorge Gonzalez [jgonz096@ucr.edu]
/// @date 01/29/2014
///
/// @par Enrollment Notes 
///     Lecture Section: 001
/// @par
///     Lab Section: 001
/// @par
///     TA: Ildar Absalyamov
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string operation;
    double num1, num2, num3, result1, result2;
    cout << "Please choose an operation: ";
    cin >> operation;
    //if within if within if
    if ((operation == "addition") || (operation == "subtraction") ||
    (operation == "multiplication") || (operation == "division") ||
    (operation == "fabs") || (operation == "sqrt") || 
    (operation == "quadratic") || (operation == "pythagorean"))
    {
        cout << "\nEnter your first number: ";
        cin >> num1;
        cout << endl;
        if ((operation == "addition") || (operation == "subtraction") ||
        (operation == "multiplication") || (operation == "division") ||
        (operation == "quadratic") || (operation == "pythagorean"))
        {
            cout << "Enter your second number: ";
            cin >> num2;
            cout << endl;
            if (operation == "quadratic")
            {
                cout << "Enter your third number: ";
                cin >> num3;
                cout << endl;
                cout << "Equation: " << num1 << "x^2 + " << num2 << "x + ";
                cout << num3 << " = 0" << endl;
                if (num1 == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else if ((pow(num2,2) - (4*num1*num3)) < 0)
                {
                    cout << "Error: Cannot take square root of a negative ";
                    cout << "number." << endl;
                }
                else
                {
                    double temp = sqrt(pow(num2,2) - ((4 * num1 * num3)));
                    result1 = ((-num2 + temp) / (2 * num1));
                    result2 = ((-num2 - temp) / (2 * num1));
                    if ((result1 == 0) && (result2 == 0))
                    {
                        result1 = 0;
                        result2 = 0;
                        cout << "Result: " << result2;
                        cout << endl;
                    }
                    else
                    {
                        cout << "Result: " << result2 << ", " << result1;
                        cout<< endl;
                    }
                }
            }
            else if (operation == "pythagorean")
            {
                cout << "Equation: sqrt(" << num1 << "^2 + " << num2 << "^2)";
                cout << endl;
                cout << "Result: " << sqrt(pow(num1,2) + pow(num2,2));
                cout << endl;
            }
            else if (operation == "addition")
            {
                cout << "Equation: " << num1 << " + " << num2 << endl;
                cout << "Result: " << (num1 + num2) << endl;
            }
            else if (operation == "subtraction")
            {
                cout << "Equation: " << num1 << " - " << num2 << endl;
                cout << "Result: " << (num1 - num2) << endl;
            }
            else if (operation == "multiplication")
            {
                cout << "Equation: " << num1 << " * " << num2 << endl;
                cout << "Result: " << (num1 * num2) << endl;
            }
            else if (operation == "division")
            {
                cout << "Equation: " << num1 << " / " << num2 << endl;
                if (num2 == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else
                {
                    cout << "Result: " << (num1 / num2) << endl;
                }
            }
        }
        else
        {
            if (operation == "fabs")
            {
                cout << "Equation: fabs(" << num1 << ")" << endl;
                cout << "Result: " << fabs(num1) << endl;
            }
            else if (operation == "sqrt")
            {
                cout << "Equation: sqrt(" << num1 << ")" << endl;
                if (num1 < 0)
                {
                    cout << "Error: Cannot take square root of a negative ";
                    cout << "number." << endl;
                    
                }
                else
                {
                    cout << "Result: " << sqrt(num1) << endl;
                }
            }
        }
    }
    else
    {
        cout << "Error: Operation not supported." << endl;
    }
    return 0;
}