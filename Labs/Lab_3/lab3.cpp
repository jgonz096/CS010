//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<3>/lab3.cpp 
/// @brief Assignment/Lab <3> for CS 10 <winter 2013>
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
 if ( ex == 1 )
 {
     double purAmt, recAmt, totChange;
     int dollars, quarters, dimes, nickels, pennies;
     cout << "Enter purchase amount: ";
     cin >> purAmt;
     cout << "\nEnter amount received: ";
     cin >> recAmt;
     totChange = (recAmt - purAmt);
     cout << "\nTotal change: $" << totChange << endl;
     dollars = static_cast<int>(totChange);
     quarters = (static_cast<int>(totChange * 100) % 100) / 25;
     dimes = ((static_cast<int>(totChange * 100) % 100) % 25) / 10;
     nickels = (((static_cast<int>(totChange * 100) % 100) % 25) % 10) / 5;
     pennies = (((static_cast<int>(totChange * 100) % 100) % 25) % 10) % 5;
     cout << "\ndollars " << dollars << "\nquarters " << quarters << "\ndimes ";
     cout << dimes << "\nnickels " << nickels << "\npennies " << pennies;
     cout << endl;
     
     
 }
 else if ( ex == 2 )
 {
     char letter;
     cout << "Enter a character: ";
     cin >> letter;
     cout << "\n" << letter << " is number " << (letter - 96) << endl;
 }
 return 0;

}