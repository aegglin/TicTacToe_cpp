
#include "TicTacToeSimulator.h"
#include "TicTacToe.h"
#include <random>
#include <iostream>

TicTacToeSimulator::TicTacToeSimulator(int numGames) : numGames(numGames){}

int TicTacToeSimulator::getNumGames() {
	return numGames;
}

std::vector<char> TicTacToeSimulator::simulateGames() {

	TicTacToe ttt;
	int numGames = TicTacToeSimulator::getNumGames();
	std::vector<char> winners(numGames);

	char winner = ' ';
	for (int i = 0; i < numGames; i++) {
		winner = simulateGame(ttt);
		winners.push_back(winner);
		ttt.reset();
	}

	return winners;
}

char TicTacToeSimulator::simulateGame(TicTacToe& ttt) {
	while (ttt.getWinner() == ' ' && ttt.getNumMoves() < TicTacToe::NUM_MOVES) {
		std::pair<int, int> move = getRandomMove();

		int r = move.first;
		int c = move.second;

		while (ttt.getBoardAt(r, c) != ' ') {
			std::pair<int, int> move = getRandomMove();
			r = move.first;
			c = move.second;
		}
		ttt.makeMove(r, c);
	}
	return ttt.getWinner();
}

std::pair<int, int> TicTacToeSimulator::getRandomMove() {
	std::random_device dev;
	std::mt19937 gen(dev());
	std::uniform_int_distribution<> dist(0, 2);

	return { dist(gen), dist(gen) };
}