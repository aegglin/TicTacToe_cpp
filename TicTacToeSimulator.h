#pragma once
#include "TicTacToe.h"
#include <utility>
#include <vector>

class TicTacToeSimulator {
public:
	TicTacToeSimulator(int numGames=10);
	std::pair<int, int> getRandomMove();
	int getNumGames();
	char simulateGame(TicTacToe& ttt);
	TicTacToe ttt;

private:
	int numGames;

};