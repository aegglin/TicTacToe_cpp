
#include "TicTacToeSimulator.h"
#include "TicTacToe.h"
#include <random>

TicTacToeSimulator::TicTacToeSimulator(int numGames) : numGames(numGames){}

int TicTacToeSimulator::getNumGames() {
	return numGames;
}

char TicTacToeSimulator::simulateGame() {
	TicTacToe ttt;
	while (ttt.getWinner() == ' ' && ttt.getNumMoves() < TicTacToe::NUM_MOVES) {
		std::pair<int, int> move = getRandomMove();

		int r = move.first;
		int c = move.second;

		while (ttt.getBoardAt(r, c) != ' ') {
			std::pair<int, int> move = getRandomMove();

			int r = move.first;
			int c = move.second;
		}
		ttt.makeMove(r, c);
	}
}

std::pair<int, int> TicTacToeSimulator::getRandomMove() {
	std::random_device dev;
	std::mt19937 gen(dev());
	std::uniform_int_distribution<> dist(0, 2);

	return { dist(gen), dist(gen) };
}