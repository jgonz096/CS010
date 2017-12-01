//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment 1 /hello.cpp 
/// @brief Assignment/Lab 1 for CS 10 <winter 2013>
///
/// @author Jorge Gonzalez [jgonz096@ucr.edu]
/// @date 01/13/2014
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
using namespace std;
int main()
{
    string name;
    cout << "Hello, What is your name?" << endl;
    cin >> name; //name input from the user
    cout << "Hi, " << name << ", I bid you good day." << endl;
    return 0;
}