//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<7>/lab7.cpp 
/// @brief Assignment/Lab <7> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <02/16/2014>
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
#include <string>
#include "assn.h"
using namespace std;
string setupUnsolved(string phrase)
{
    for (int i = 0; i < phrase.size(); i++)
    {
        if (((phrase.at(i) >= 'A') && (phrase.at(i) <= 'Z')) || ((phrase.at(i) >= 'a') && (phrase.at(i) <= 'z')))
        {
            phrase.at(i) = '-';
        }
    }
    return phrase;
}
int main()
{
    string phrase;
    getline(cin, phrase);
    phrase = setupUnsolved(phrase);
    cout << phrase;
    return 0;
}