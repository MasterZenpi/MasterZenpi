#include "Puzzle.h"
#include <vector>


void Puzzle::instructions() {
	std::cout << "Chose your Difficulty Level: (1)Easy (2)Medium (3)Hard ";

	std::cin >> userDiff;
	
	while (userDiff > 3) {
		std::cin.clear();
		std::cout << "Invalid Difficulty level. Please enter a numer between 1 -3 ";
		std::cin >> userDiff;
	}
}

void Puzzle::PrintPuzzle(){
	const int boxSize = 3;

	int box1[boxSize][boxSize];
	std::vector<int> numberLine;
	for (int i = 1; i <= 9; i++) { numberLine.push_back(i); }

	for(int row = 0; row < 9; row++){
		
	}
	
}