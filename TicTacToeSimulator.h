#pragma once
#include "TicTacToe.h"
#include <utility>
#include <vector>

class TicTacToeSimulator {
public:
	TicTacToeSimulator(const int numGames=10);
	std::pair<int, int> getRandomMove() const;
	inline int getNumGames() const { return numGames; }
	char simulateGame(TicTacToe& ttt);
	TicTacToe ttt;

private:
	int numGames;

};