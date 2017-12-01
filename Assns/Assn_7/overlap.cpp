//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<7>/overlap.cpp 
/// @brief Assignment/Lab <6> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <02/28/2014>
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
void overlap (const string keyWord, const string compareWord)
{
    for (int i = 1; i < keyWord.size(); i--)
    {
        if (((compareWord.substr(0,keyWord.size() - i) == 
        keyWord.substr(0,keyWord.size() - i)) && 
        (compareWord.substr(0,1) == keyWord.substr(0,1))) ||
        (compareWord.substr(0,keyWord.size() - i) == 
        keyWord.substr(0,keyWord.size() - i)) && 
        (compareWord.substr(compareWord.size(),1) == 
        keyWord.substr(keyWord.size(),1)))
        {
            cout << "Match: " << compareWord << "\nOverlap: " << i;
            return;
        }
    }
    cout << "Match: No Match\nOverlap: 0" << endl; 
    return;
}
int main()
{
    string keyWord1, keyWord2, keyWord3, compareWord;
    cin >> keyWord1 >> keyWord2 >> keyWord3;
    cout << "Key: ";
    cout << keyWord1 << endl;
    while (cin >> compareWord)
    {
        overlap(keyWord1,compareWord);
    }
     cout << "Key: ";
    cout << keyWord1 << endl;
    while (cin >> compareWord)
    {
        overlap(keyWord2,compareWord);
    }
     cout << "Key: ";
    cout << keyWord3 << endl;
    while (cin >> compareWord)
    {
        overlap(keyWord3,compareWord);
    }
    return 0;
}