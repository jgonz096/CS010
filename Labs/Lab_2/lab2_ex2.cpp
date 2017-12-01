//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<1>/lab1.cpp 
/// @brief Assignment/Lab <1, e.g. 1,2,3..10> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <01/13/2014>
///
/// @par Enrollment Notes 
///     Lecture Section: <001>
/// @par
///     Lab Section: <001>
/// @par
///     TA: <Ildar Absalyamov>
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
using namespace std;
int main()
{
    double num1, num2, num3, num4, num5, num6;
    double sum, average;
    cout << "Enter six fp numbers on a single line, separated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
    sum = num1 + num2 + num3 + num4 + num5 + num6;
    average = sum/6;
    cout << "\nSum of " << num1 << " + " << num2 << " + " << num3 << " + ";
    cout << num4 << " + " << num5 << " + " << num6 << " = " << sum << endl;
    cout << "Average = " << average << endl;
    return 0;
}