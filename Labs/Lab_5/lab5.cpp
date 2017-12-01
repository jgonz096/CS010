//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<5>/lab5.cpp 
/// @brief Assignment/Lab <3> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <02/03/2014>
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
        string word;
        int count1 = 0, count2 = 0;
        cout << "Enter a word: ";
        cin >> word;
        cout << endl;
        for (int i = 0; i <= word.size() - 1; i++)
        {
            if (word.at(i) == 'x')
            {
                count1++;
            }
            if (word.at(i) == 'e')
            {
                count2++;
            }
        }
        if (count1 > 0)
        {
            cout << "Your word, " << word << ", contains the character 'x'";
            cout << endl; 
        }
        if (count2 > 0)
        {
            cout << "Your word, " << word << ", contains the character 'e'";
            cout << endl; 
        }
    }
    else if (ex == 2)
    {
        string word;
        cout << "Enter a word: ";
        cin >> word;
        cout << endl;
        for (int i = 0; i <= word.size() - 1; i++)
        {
            if (word.at(i) == 'x')
            {
                word.at(i) = '*';
            }
            if (word.at(i) == 'e')
            {
                word.at(i) = '3';
            }
            if (word.at(i) == 'i')
            {
                word.at(i) = '1';
            }
        }
        cout << "Your word transformed is " << word << endl;
    }
    else if (ex == 3)
    {
        string sentence;
        cout << "Enter a sentence: ";
        cin >> sentence;
        cout << endl;
        int pos1 = sentence.find(".");
        int pos2 = sentence.find("stop");
        if (pos1 >= 0)
        {
            cout << "The character '.' is located at index " << pos1 << endl;
        }
        else if (pos1 < 0)
        {
            cout << "Your sentence does not contain the character '.'" << endl;
        }
        if (pos2 >= 0)
        {
            cout << "The word \"stop\" starts at index " << pos2 << endl;
        }
        else if (pos2 < 0)
        {
            cout << "Your sentence does not contain the word \"stop\"" << endl;
        }
    }
    return 0;
}
// remember to always use the (\") if you want to add quotes
 
 