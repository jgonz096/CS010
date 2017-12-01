//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<6>/lab6.cpp 
/// @brief Assignment/Lab <6> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <02/09/2014>
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
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int ex;
    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;
    if ( ex == 1 )
    {
        //aklsjfdkl;ajfkla
        int num1, num2, num3, num4, num5, num6;
        cout << "Enter beginning and ending numbers, separated by space: ";
        cin >> num1 >> num2;
        cout << endl;
        for (num1; num1 <= (num2 - 1); num1++)
        {
            cout << num1 << ", ";
        }
        cout << num2 << endl;
        cout << "Enter beginning and ending numbers, separated by space: ";
        cin >> num3 >> num4;
        cout << endl;
        cout << num3;
        num3 = num3 + 2;
        for (num3; num3 <= (num4); num3 = num3 + 2)
        {
            cout << ", " << num3;
        }
        cout << endl;
        cout << "Enter the beginning and largest positive numbers, ";
        cout << "separated by space: ";
        cin >> num5 >> num6;
        cout << endl;
        cout << num5;
        num5 = num5 * -2;
        for (num5; (num5) <= (num6); num5 = num5 * -2)
        {
            cout << ", " << num5;
        }
        cout << endl;
    }
    else if (ex == 2)
    {
        int grade, countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
        cout << "Enter one or more grades, or -1 to stop: " << endl;
        cin >> grade;
        if ((grade <= 100) && (grade >= 90))
        {
            countA = countA + 1;
        }
        if ((grade <= 89) && (grade >= 80))
        {
            countB = countB + 1;
        }
        if ((grade <= 79) && (grade >= 70))
        {
            countC = countC + 1;
        }
        if ((grade <= 69) && (grade >= 60))
        {
            countD = countD + 1;
        }
        if ((grade <= 59) && (grade >= 0))
        {
            countF = countF + 1;
        }
        while ((grade >= 0) && (grade <= 100))
        {
            cin >> grade;
            if ((grade <= 100) && (grade >= 90))
            {
                countA = countA + 1;
            }
            if ((grade <= 89) && (grade >= 80))
            {
                countB = countB + 1;
            }
            if ((grade <= 79) && (grade >= 70))
            {
                countC = countC + 1;
            }
            if ((grade <= 69) && (grade >= 60))
            {
                countD = countD + 1;
            }
            if ((grade <= 59) && (grade >= 0))
            {
                countF = countF + 1;
            }
        }
        cout << "The grades breakdown is:" << endl << "As: " << countA << endl;
        cout << "Bs: " << countB << "\nCs: " << countC << "\nDs: " << countD;
        cout << "\nFs: " <<countF << endl;
    }
    else if (ex == 3)
    {
        srand(time(0));
        string answer;
        int flip;
        cout << "Toss the coin? ";
        cin >> answer;
        cout << endl;
        while (answer == "yes")
        {
            flip = rand() % 2;
            if (flip == 0)
            {
                cout << "heads" << endl;
            }
            else if (flip == 1)
            {
                cout << "tails" << endl;
            }
            cout << "Toss the coin? ";
            cin >> answer;
            cout << endl; 
        }
    }
    return 0;
}