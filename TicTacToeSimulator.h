#pragma once
#include "TicTacToe.h"
#include <utility>

class TicTacToeSimulator {
public:
	TicTacToeSimulator(int numGames=10);
	std::pair<int, int> getRandomMove();
	char simulateGame();
	int getNumGames();
	TicTacToe ttt;

private:
	int numGames;
};