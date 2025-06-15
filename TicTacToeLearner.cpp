#include "TicTacToeLearner.h"

void TicTacToeLearner::simulateGames() {

	TicTacToe ttt;
	int numGames = simulator.getNumGames();
	std::vector<char> winners(numGames);

	char winner = ' ';
	for (int i = 0; i < numGames; i++) {
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
	}

}