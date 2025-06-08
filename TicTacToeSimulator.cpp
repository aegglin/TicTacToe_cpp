
#include "TicTacToeSimulator.h"
#include <random>

TicTacToeSimulator::TicTacToeSimulator() :numGames(10) {}

TicTacToeSimulator::TicTacToeSimulator(int numGames) : numGames(numGames){}

int TicTacToeSimulator::getNumGames() {
	return numGames;
}

char TicTacToeSimulator::simulateGame() {


}

std::array<int, 2> TicTacToeSimulator::getSimMove() {
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist2(0, 2);

}