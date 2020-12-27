#pragma once
#include <iostream>

class Puzzle {
private:
	int userDiff = 0;
	int puzzle[9][9] = {0,0};
	int const gridSize = 9;

public:
	Puzzle() {
		for (int row = 0; row < gridSize; row++) {
			for (int col = 0; col < gridSize; col++) {

				std::cout << puzzle[row][col] << " ";
			}
			std::cout << "\n";
		}
	}
	void instructions();
	void PrintPuzzle();
	bool isRowCompleted();
	bool isColCompleted();

};