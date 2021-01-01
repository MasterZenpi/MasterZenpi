#pragma once
#include <iostream>

class Puzzle {
private:
	int userDiff = 0;
	int puzzle[9][9] = { 0,0 };
	int const gridsize = 9;
	//coordinates
	int x = 0;
	int y = 0;
	int value = 0;
public:
	Puzzle();
	~Puzzle();

	void instructions();
	void PrintPuzzle();
	void userCordnites();
	void changeandPrintPuzzle();
	bool isRowCompleted();
	bool isColCompleted();
	bool isPuzzleCompleted();


};