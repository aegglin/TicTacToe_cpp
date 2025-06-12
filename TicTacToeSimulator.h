#pragma once
#include "TicTacToe.h"
#include <utility>
#include <vector>

class TicTacToeSimulator {
public:
	TicTacToeSimulator(int numGames=10);
	std::pair<int, int> getRandomMove();
	std::vector <char> simulateGames();
	int getNumGames();
	TicTacToe ttt;

private:
	int numGames;
	char simulateGame(TicTacToe& ttt);

};