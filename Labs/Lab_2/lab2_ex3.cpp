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
    double upLim, lowLim;
    int age;
    cout << "What is your age? ";
    cin >> age;
    cout << endl;
    upLim = (220 - age) * .75;
    lowLim = (220 - age) * .6;
    cout << "Your target heart rate is between " << lowLim << " and " << upLim;
    cout << " bpm." << endl;
    return 0;
}