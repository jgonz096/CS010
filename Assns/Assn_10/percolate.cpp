//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<10>/lab10.cpp 
/// @brief Assignment/Lab <10> for CS 10 <winter 2013>
///
/// @author <Jorge Gonzalez> [<jgonz096@ucr.edu>]
/// @date <03/10/2014>
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
//        Requires grid file as input (input redirection).
//        Grid file looks similar to:
//
//            xxxSxxxxxxxxxxxxxxx
//            x                 x
//            xxxxxxx xxxxxxxxxxx
//            x                 x
//            xxxxxxxxxxxxxxGxxxx
//
//        Spaces represent empty grid blocks.  Init in EMPTY state.
//        S represents the starting grid block(s). Init in COLOR state.
//        G represents the goal grid block. More than one can exist.
//        Any non-space (x here) is considered a wall. Init in WALL state.

#include <iostream>
#include <vector>

using namespace std;

// Provided functions
void animationPause();
void clearScreen();
void printEmpty();
void printColor();
void printWall();
void readGrid(vector <vector <int> > &grid, vector <vector <bool> > &goals);


// States for grid spots for use throughout the program
const int EMPTY = 1;
const int WALL = 2;
const int COLOR = 3;
const int TO_BE_COLORED = 4;



/// @brief percolates the fluid from grid blocks with fluid in them
/// @param grid the current grid filled with current states
void perc(vector <vector <int> > &grid)
{
    // TODO: Implement this function

    /// Traverse 2D grid setting intermediate state where applicable

    /// Traverse 2D grid converting intermediate states to color state
}


/// @brief determines whether the percolation has reached goal cell
/// @param grid the grid in its current state
/// @param goals the 2D vector filled with true/false based on if cell is goal
/// @return true if grid block is a goal and it is colored, otherwise false
bool percComplete(const vector <vector <int> > &grid,
const vector <vector <bool> > &goals)
{
    // TODO: Implement this function

    /// Traverse the 2D goals vector and return true if the cell is a goal
    /// and the same cell within the grid is in the COLOR state. Making sure
    /// to check bounds when appropriate.    

    return false;
}


/// @brief prints the NxM grid 
/// 
///     Calls the respective print helper based on the state of the grid cell.
///
/// @param grid the grid to print, filled with integer states for each cell
void printGrid(const vector <vector <int> > &grid)
{
    //
    int cell;
    // TODO: implement this function
    for(int N = 0; N < grid.size(); N++ )
    {
        for(int M = 0; M < grid.at(N).size(); M++ )
        {
            cell = grid.at(N).at(M);
            if (cell == EMPTY)
            {
                printEmpty();
            }
            else if (cell == WALL)
            {
                printWall();
            }
            else if (cell == COLOR)
            {
                printColor();
            }
        }
        cout << endl;
    }


    /// Clear the screen
    clearScreen();

    /// Traverse 2D grid, print each cell using each state's helper functions.
}


// DO NOT alter code in main
int main()
{
    // 2D vectors to store states of grid and whether it is a goal cell
    vector <vector <int> > grid;
    vector <vector <bool> > goals;

    // Read in the grid from input
    readGrid(grid, goals);

    // Print initial grid
    printGrid(grid);

    // Run the simulation
    do
    {
        // Animation
        animationPause();
        
        // Percolate
        perc(grid);
        
        // Print updated grid
        printGrid(grid);
    }while(!percComplete(grid, goals));

    return 0;
}