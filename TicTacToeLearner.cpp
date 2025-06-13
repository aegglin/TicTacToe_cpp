#include "TicTacToeLearner.h"

void TicTacToeLearner::learn() {
	simulator.simulateGames();

	char winner = simulator.ttt.getWinner();
	if (winner == ' ' || winner == 'O') {
		evals.insert(std::make_pair(simulator.ttt, 0.0));
	} 
	else if (winner == 'X') {
		evals.insert(std::make_pair(simulator.ttt, 1.0));
	}
	else {
		evals.insert(std::make_pair(simulator.ttt, 0.5));
	}

}
