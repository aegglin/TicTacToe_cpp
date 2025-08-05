#include "TicTacToeLearner.h"

TicTacToeLearner::TicTacToeLearner(const int numGames)
	: numGames(numGames), simulator(numGames) {}

void TicTacToeLearner::simulateGames() {
	std::vector<char> winners(numGames);
	TicTacToe ttt;

	char winner = ' ';
	/*for (int i = 0; i < numGames; i++) {
		winner = simulator.simulateGame(ttt);
		winners.push_back(winner);
		if (winner == ' ' || winner == 'O') {
			evals.insert_or_assign(simulator.ttt, 0.0);
		}
		else if (winner == 'X') {
			evals.insert_or_assign(simulator.ttt, 1.0);
		}
		else {
			evals.insert_or_assign(simulator.ttt, 0.5);
		}
		ttt.reset();
	}*/
}