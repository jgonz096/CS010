//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment 5 /pig.cpp 
/// @brief Assignment/Lab 1 for CS 10 <winter 2013>
///
/// @author Jorge Gonzalez [jgonz096@ucr.edu]
/// @date 02/11/2014
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
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    //ml;hjk;h
    srand(time(0));
    int hold, sim, count = 0;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int count5 = 0, count6 = 0, count7 = 0;
    int j = 0;
    cout << "What value should we hold at? ";
    cin >> hold;
    cout << endl;
    cout << "Hold-at-N turn simulations? ";
    cin >> sim;
    cout << endl;
    cout << "Score\tEstimated Probability" << endl;
    for (int n = 1; n <= sim; n++)
    {
        while (j < hold)
        {
            int roll = (rand() % 6) + 1;
            if (roll == 1)
            {
                count = 0;
                j = j + hold;
            }
            else if (roll != 1)
            {
                count = count + roll;
                j = count;
            }
        }
        if (count == 0)
        {
            count1 = count1 + 1;
        }
        if (count == hold)
        {
            count2 = count2 + 1;
        }
        if (count == (hold + 1))
        {
            count3 = count3 + 1;
        }
        if (count == (hold + 2))
        {
            count4 = count4 + 1;
        }
        if (count == (hold + 3))
        {
            count5 = count5 + 1;
        }
        if (count == (hold + 4))
        {
            count6 = count6 + 1;
        }
        if (count == (hold + 5))
        {
            count7 = count7 + 1;
        }
        j = 0;
        count = 0;
    }
    cout << "0" << "\t" << fixed;
    cout << setprecision(6) << static_cast<double>(count1) / sim << endl;
    cout << hold << "\t" << fixed;
    cout << setprecision(6) << static_cast<double>(count2) / sim << endl;
    cout << hold + 1 << "\t" << fixed;
    cout << setprecision(6) << static_cast<double>(count3) / sim << endl;
    cout << hold + 2 << "\t" << fixed;
    cout << setprecision(6) << static_cast<double>(count4) / sim << endl;
    cout << hold + 3 << "\t" << fixed;
    cout << setprecision(6) << static_cast<double>(count5) / sim << endl;
    cout << hold + 4 << "\t" << fixed;
    cout << setprecision(6) << static_cast<double>(count6) / sim << endl;
    cout << hold + 5 << "\t" << fixed;
    cout << setprecision(6) << static_cast<double>(count7) / sim << endl;
    return 0;
}