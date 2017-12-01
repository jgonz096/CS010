//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<9>/lab9.cpp 
/// @brief Assignment/Lab <9> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <03/03/2014>
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
#include <vector>
using namespace std;
void initVector(vector<char>&v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v.at(i) = 'a' + i;
        cout << v.at(i);
    }
    cout << endl;
}
int main()
{
    vector<char>v;
    initVector(v);
    return 0;
}