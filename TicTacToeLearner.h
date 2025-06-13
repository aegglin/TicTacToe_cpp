#pragma once
#include <unordered_map>
#include "TicTacToe.h"
#include "TicTacToeSimulator.h"

class TicTacToeLearner {
public:
	void learn();
private:
	TicTacToeSimulator simulator;
	std::unordered_map<TicTacToe, float> evals;
};