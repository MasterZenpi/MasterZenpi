#include <iostream>
#include <exception>
#include <vector>
#include "Puzzle.h"

using namespace std;

/* To Do:
* 1. have user enter diff level (done)
* 2. create a random puzzle
* 3. create a puzzle with the right amount of blanks per diff level
* 4. check when row/column is completed. maybe display how many colums and rows are completed
* 5. check for repeats in rows/colums with user inputs
*  . When completed give a congradulations and option to repeat puzzle
*
*/


int main() {

	Puzzle mainPuzzle;

	do {
		
		mainPuzzle.instructions();
		mainPuzzle.PrintPuzzle();
		mainPuzzle.userCordnites();


	} while (!mainPuzzle.isPuzzleCompleted());

	return 0;
}