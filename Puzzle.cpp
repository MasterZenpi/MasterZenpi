#include "Puzzle.h"
#include <vector>
#include <iostream>
#include <sstream>

Puzzle::Puzzle(void) {
	std::cout << "Welcome to Sudoku" << std::endl;
}

Puzzle::~Puzzle(void) {
	std::cout << "Thanks for playing\n";
}

void Puzzle::instructions() {
	std::cout << "Chose your Difficulty Level: (1)Easy (2)Medium (3)Hard ";

	std::cin >> userDiff;

	while (userDiff > 3) {
		std::cin.clear();
		std::cout << "Invalid Difficulty level. Please enter a numer between 1 -3 ";
		std::cin >> userDiff;
	}
	this->userDiff = userDiff;
}

void Puzzle::PrintPuzzle() {
	//make a loop that suffles the vectors a random amount of times so we get a random puzzle everytime

	//variable initiaztion
	std::vector<int> numberLine;
	for (int i = 1; i <= 9; i++) { numberLine.push_back(i); }

	//To Do: make sure that the puzzle is random
	//		i think create two more mumberline vectors and shift threw them in the loop below

	//fills in the puzzle
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			puzzle[row][col] = numberLine.at(col);
		}
		
	}

	//prints the puzzle 
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			std::cout << puzzle[row][col] << " ";
		}
		std::cout << std::endl;
	}

}

bool Puzzle::isRowCompleted() {
	return true;
}
bool Puzzle::isColCompleted() {
	return true;
}
bool Puzzle::isPuzzleCompleted() {
	return true;
}

void Puzzle::userCordnites() {
	//this is going to ask the user to enter coordinates (as a string) then it will be split into ints.
	// input should be "(x,y) value"
	
	std::stringstream usrINput;
	int coordinateX = 0;
	int coordinateY = 0;
	int userValue = 0;
	char throwaway = ' ';

	std::cout << "Please enter x and y coordnites and value. Example: (x,y) value ";

}

void Puzzle::changeandPrintPuzzle() {
	for (int row = 0; row < gridsize; row++) {
		for (int col = 0; col < gridsize; col++) {
		
		}
	}
}