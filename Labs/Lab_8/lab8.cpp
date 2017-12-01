//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<8>/lab8.cpp 
/// @brief Assignment/Lab <8> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <02/23/2014>
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
void setWeightedMaxes(int& currentMaxWeight,string& wordMaxWeight,
int secondMaxWeight,const string& secondWeight)
{
    if (currentMaxWeight < secondMaxWeight)
    {
        currentMaxWeight = secondMaxWeight;
        wordMaxWeight = secondWeight;
        return;
    }
    else
    {
        return;
    }
}
int main()
{
    //this program switches maximum weight values
    int currentMaxWeight, secondMaxWeight;
    string wordMaxWeight;
    const string secondWeight;
    setWeightedMaxes(currentMaxWeight,wordMaxWeight,secondMaxWeight,
    secondWeight);
    return 0;
}