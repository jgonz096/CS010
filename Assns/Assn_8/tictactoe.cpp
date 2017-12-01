//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<8>/tictactoe.cpp 
/// @brief Assignment/Lab <8> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <03128/2014>
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
#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;

// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen()
{
    cout << endl;
    
    if (CLEAR_SCREEN)
    {
        cout << "\033c";
    }
    
    cout << endl;
}


/// @brief Draws the provided tic-tac-toe board to the screen
//  @param board is the tic-tac-toe board that should be drawn
void drawBoard(const vector <char> &board)
{
    clearScreen();
    for (int i = 0; i < 9; i += 3)
    {
        cout << "  " << board.at(i) << "  |  " << board.at(i + 1) << "  |  ";
        cout << board.at(i + 2) << "  " << endl;
        if (i < 6)
        cout << "-----|-----|-----" << endl;
    }
    cout << endl;
}



/// @brief Fills vector with characters starting at lower case a.
///
///     The amount of the alphabet placed into the vector depends on its size.
///     When the vector is size 1 then it will have only character a.
///     When the vector is size 5 then it will have characters a to e.
///     When the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector <char> &v)
{
    // TODO: implement function
    for (int i = 0; i < v.size(); i++)
    {
        v.at(i) = 'a' + i;
    }
}


/// @brief Converts a character representing a cell to associated vector index
/// @param the position to be converted to a vector index
/// @return the integer index in the vector, should be 0 to (vector size - 1)
int convertPosition(char position)
{
    // TODO: implement function
    return (position - 'a');
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector <char> &board, int position)
{
    // TODO: implement function
    if ((position >= 0) && (position <= 8))
    {
        if ((board.at(position) != 'x') && (board.at(position) != 'o'))
        {
            return true;
        }
    }
    return false;
}

/// @brief Acquires a play from the user as to where to put her mark
///
///     Utilizes convertPosition and validPlacement functions to convert the
///     user input and then determine if the converted input is a valid play.
///
/// @param board the current tic-tac-toe board 
/// @return an integer index in board vector of a chosen available board spot
int getPlay(const vector <char> &board)
{
    int position;
    char letter;
    bool input = false;
    while (!input)
    {
        cout << "Please choose a position: ";
        cin >> letter;
        cout << endl;
        // TODO: implement function
        position = convertPosition(letter);
        input = validPlacement(board,position);
        if (input)
        {
            return position;
        }
    }
}


/// @brief Predicate function to determine if the game has been won
///
///     Winning conditions in tic-tac-toe require three marks from same 
///     player in a single row, column or diagonal.
///
/// @param board the current tic-tac-toe board 
/// @return true if the game has been won, false otherwise
bool gameWon(const vector <char> &board)
{
    // TODO: implement function
    if (((board.at(0) == 'x') && (board.at(1) == 'x') && 
    (board.at(2) == 'x')) ||
    ((board.at(3) == 'x') && (board.at(4) == 'x') && (board.at(5) == 'x')) ||
    ((board.at(6) == 'x') && (board.at(7) == 'x') && (board.at(8) == 'x')) ||
    ((board.at(0) == 'x') && (board.at(3) == 'x') && (board.at(6) == 'x')) ||
    ((board.at(1) == 'x') && (board.at(4) == 'x') && (board.at(7) == 'x')) ||
    ((board.at(2) == 'x') && (board.at(5) == 'x') && (board.at(8) == 'x')) ||
    ((board.at(0) == 'x') && (board.at(4) == 'x') && (board.at(8) == 'x')) ||
    ((board.at(2) == 'x') && (board.at(4) == 'x') && (board.at(6) == 'x')))
    {
        return true;
    }
    else if (((board.at(0) == 'o') && (board.at(1) == 'o') &&
    (board.at(2) == 'o')) ||
    ((board.at(3) == 'o') && (board.at(4) == 'o') && (board.at(5) == 'o')) ||
    ((board.at(6) == 'o') && (board.at(7) == 'o') && (board.at(8) == 'o')) ||
    ((board.at(0) == 'o') && (board.at(3) == 'o') && (board.at(6) == 'o')) ||
    ((board.at(1) == 'o') && (board.at(4) == 'o') && (board.at(7) == 'o')) ||
    ((board.at(2) == 'o') && (board.at(5) == 'o') && (board.at(8) == 'o')) ||
    ((board.at(0) == 'o') && (board.at(4) == 'o') && (board.at(8) == 'o')) ||
    ((board.at(2) == 'o') && (board.at(4) == 'o') && (board.at(6) == 'o')))
    {
        return true;
    }
    return false;
}


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector <char> &board)
{
    // TODO: implement function
    for (int i = 0; i < board.size(); i++)
    {
        if (board.at(i) != 'x')
        {
            if (board.at(i) != 'o')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    // Variables that you may find useful to utilize
    vector <char> board(9);
    int curPlay;
    int turn = PLAYER1; // Player 1 always goes first and is 'x'
    
    /// TODO: Initialize board to empty state
    initVector(board);
    
    /// TODO: Display empty board
    drawBoard(board);
    
    
    /// TODO: Play until game is over
    while ((!boardFull(board)) && (!gameWon(board)))
    {
        /// TODO: Get a play
        
        /// TODO: Set the play on the board
        if (turn == PLAYER1)
        {
            board.at(getPlay(board)) = 'x';
        }
        else if (turn == PLAYER2)
        {
            board.at(getPlay(board)) = 'o';
        }
        
        /// TODO: Switch the turn to the other player
        if (turn == PLAYER1)
        {
            turn = PLAYER2;
        }
        else if (turn == PLAYER2)
        {
            turn = PLAYER1;
        }
        
        /// TODO: Output the updated board
        drawBoard(board);
        
        /// TODO: Determine winner and output appropriate message
        if (gameWon(board))
        {
            if (turn == PLAYER2)
            {
                cout << "PLAYER 1 (x's) wins!" << endl;
            }
            else if (turn == PLAYER1)
            {
                cout << "PLAYER 2 (o's) wins!" << endl;
            }
        }
        else if (boardFull(board))
        {
            cout << "No one wins" << endl;
        }
    }
    
    return 0;
}