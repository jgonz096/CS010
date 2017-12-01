//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<4>/lab3.cpp 
/// @brief Assignment/Lab <4> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <01/19/2014>
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
    int ex;
    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;
    if ( ex == 1 ) //exercise 1
    {
        char Char;
        cout << "Enter a character: ";
        cin >> Char;
        if ((Char >= '0') && (Char <= '9'))
        {
            cout << "\nYou entered a numeric digit." << endl;
        }
        else if ((Char >= 'a') && (Char <= 'z'))
        {
            cout << "\nYou entered a lowercase letter." << endl;
        }
        else if ((Char >= 'A') && (Char <= 'Z'))
        {
            cout << "\nYou entered an uppercase letter." << endl;
        }
        else
        {
            cout << "\nYou entered an unknown character type." << endl;
        }
    }
    else if ( ex == 2 ) // exercise 2
    {
        char choice;
        cout << "What do you want to do tonight?" << endl;
        cout << "a. Go to the movies" << endl << "b. Eat out" << endl;
        cout << "c. Hang out at the Mall" << endl << "d. Go watch the "; 
        cout << "Dodgers\n";
        cin >> choice;
        if ((choice == 'A') || (choice == 'a'))
        {
            cout << "I know just the movie to see!" << endl;
        }
        else if ((choice == 'B') || (choice == 'b'))
        {
            cout << "Great! I've been wanting to try that new Tuvaluan ";
            cout << "restaurant!" << endl;
        }
        else if ((choice == 'C') || (choice == 'c'))
        {
            cout << "You bring the cash!" << endl;
        }
        else if ((choice == 'D') || (choice == 'd'))
        {
            cout << "Take me out to the ball game ..." << endl;
        }
        else
        {
            cout << "Nothing suits you, then? I guess we'll just stay and";
            cout << " program!" << endl;
        }
    }
    return 0;
}