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
	//variable initiaztion
	const int boxSize = 3;
	int box1[boxSize][boxSize];
	std::vector<int> numberLine;
	for (int i = 1; i <= 9; i++) { numberLine.push_back(i); }


	//fills in the puzzle
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			puzzle[row][col] = numberLine.at(col);
		}
		
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
	//this is going to ask the user to enter coordinates (as a string) then it will be split into ints
	
	std::stringstream usrINput;
	int coordinateX = 0;
	int coordinateY = 0;

}

void Puzzle::changePuzzle() {
	for (int row = 0; row < gridsize; row++) {
		for (int col = 0; col < gridsize; col++) {
		
		}
	}
}