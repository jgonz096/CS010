//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment 3 /isbn.cpp 
/// @brief Assignment/Lab 3 for CS 10 <winter 2013>
///
/// @author Jorge Gonzalez [jgonz096@ucr.edu]
/// @date 01/21/2014
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
    int isbn, dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9;
    int checksum, weightSum;
    cout << "Please enter the first 9 digits of the ISBN: ";
    cin >> isbn;
    //digits below are the isbn from left to right
    dig1 = (isbn / 100000000);
    dig2 = (isbn % 100000000) / 10000000;
    dig3 = ((isbn % 100000000) % 10000000) / 1000000; 
    dig4 = (((isbn % 100000000) % 10000000) % 1000000) / 100000;
    dig5 = ((((isbn % 100000000) % 10000000) % 1000000) % 100000) / 10000;
    dig6 = (((((isbn % 100000000) % 10000000) % 1000000) % 100000) % 10000) / 
    1000;
    dig7 = ((((((isbn % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 
    1000) / 100;
    dig8 = (((((((isbn % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 
    1000) % 100) / 10;
    dig9 = (((((((isbn % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 
    1000) % 100) % 10;
    weightSum = ((1 * dig1) + (2 * dig2) + (3 * dig3) + (4 * dig4) + (5 * dig5)+
    (6 * dig6) + (7 * dig7) + (8 * dig8) + (9 * dig9));
    checksum = (weightSum % 11);
    cout << "\nChecksum: " << checksum << endl;
    return 0;
}