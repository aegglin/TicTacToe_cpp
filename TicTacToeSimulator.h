#pragma once
#include "TicTacToe.h"
#include <array>

class TicTacToeSimulator {
public:
	TicTacToeSimulator();
	TicTacToeSimulator(int numGames);
	TicTacToe ttt;
	char simulateGame();
	int getNumGames();
	std::array<int, 2> getSimMove();

private:
	int numGames;
};