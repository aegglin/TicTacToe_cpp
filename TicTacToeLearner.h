#pragma once
#include <unordered_map>
#include "TicTacToe.h"
#include "TicTacToeSimulator.h"

class TicTacToeLearner {
public:
	TicTacToeLearner(const int numGames=30);
	void simulateGames();
private:
	const int numGames;
	TicTacToeSimulator simulator;
	std::unordered_map<TicTacToe, float> evals;
};