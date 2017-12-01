//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<6>/hangman.cpp 
/// @brief Assignment/Lab <6> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <02/19/2014>
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
/*const bool CLEAR_SCREEN = true;
void clearScreen() //clears the screen
{
    cout << endl;

    if (CLEAR_SCREEN)
    {
        cout << "\033c";
    }

    cout << endl;
}*/
string setupUnsolved(string phrase) //changes phrase to hyphens
{
    for (int i = 0; i < phrase.size(); i++)
    {
        if (((phrase.at(i) >= 'A') && (phrase.at(i) <= 'Z')) || 
        ((phrase.at(i) >= 'a') && (phrase.at(i) <= 'z')))
        {
            phrase.at(i) = '-';
        }
    }
    return phrase;
}
string updateUnsolved(string phrase,string unsolved,char guess)
{
    if (phrase.find(guess) == string::npos) 
    {
        return unsolved;
    }
    else
    {
        for (int j = 0; j < phrase.size(); j++)
        {
            if (guess == phrase.at(j))
            {
                unsolved.at(j) = phrase.at(j);
            }
        }
    }
    return unsolved;
}
char getGuess(string prevGuesses)
{
    char guess;
    cin >> guess;
    if ((isalpha(guess)) && (prevGuesses.find(guess) == string::npos))
    {
        prevGuesses = prevGuesses + guess;
        return guess;
    }
    else
    {
        cout << "Invalid guess! Please re-enter a guess: ";
        cin >> guess;
        if ((isalpha(guess)) && (prevGuesses.find(guess) == string::npos))
        {
            prevGuesses = prevGuesses + guess;
            return guess;
        }
        else
        {
            while(!((isalpha(guess)) && 
            (prevGuesses.find(guess) == string::npos)))
            {
                cout << "Invalid guess! Please re-enter a guess: ";
                cin >> guess;
            }
            return guess;
        }
        /*while((prevGuesses.find(guess) != string::npos) && isalpha(guess))
        {
            cout << "Invalid guess! Please re-enter a guess: ";
            cin >> guess;
            while ((isalpha(guess) == false) || 
            (prevGuesses.find(guess) != string::npos))
            {
                cout << "Invalid guess! Please re-enter a guess: ";
                cin >> guess;
            }
        }
        if(isalpha(guess))
        {
            prevGuesses = prevGuesses + guess;
            return guess;
        }
        return guess;*/
    }
}
int main()
{
    string phrase, unsolved, prevGuesses = "";
    int wrongGuess = 7;
    char guess;
    cout << "Enter phrase: ";
    getline(cin, phrase);
    cout << endl;
    unsolved = setupUnsolved(phrase);
    clearScreen();
    cout << "Phrase: " << unsolved << endl;
    cout << "Enter a guess: " << endl;
    guess = getGuess(prevGuesses);
    if (phrase.find(guess) == string::npos)
    {
        wrongGuess--;
    }
    unsolved = updateUnsolved(phrase,unsolved,guess);
    prevGuesses = prevGuesses + guess;
    cout << unsolved << endl;
    while ((wrongGuess > 0) && (unsolved.find('-') != string::npos))
    {
        clearScreen();
        cout << "Phrase: " << unsolved << endl;
        cout << "Guessed so far: " << prevGuesses << endl;
        cout << "Wrong guesses left: " << wrongGuess << endl;
        cout << "Enter a guess: " << endl;
        guess = getGuess(prevGuesses);
        if (phrase.find(guess) == string::npos)
        {
            wrongGuess--;
        }
        unsolved = updateUnsolved(phrase,unsolved,guess);
        prevGuesses = prevGuesses + guess;
        cout << unsolved << endl;
    }
    if (wrongGuess == 0)
    {
        cout << "You lost!" << endl;
    }
    else if (unsolved.find('-') != string::npos)
    {
        cout << "Congratulations!!" << endl;
    }
    return 0;
}