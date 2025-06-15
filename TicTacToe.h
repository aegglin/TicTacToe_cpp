#pragma once
class TicTacToe {
public:
	static constexpr int BOARD_SIZE = 3;
	static constexpr int NUM_MOVES = 9;

	TicTacToe();
	char getCurrentPlayer() const;
	void printBoard() const;
	char getWinner();
	void makeMove(const int r, const int c);
	bool isValidMove(const int r, const int c) const;
	int getNumMoves() const;
	char getBoardAt(const int r, const int c) const;
	void reset();
	char board[BOARD_SIZE][BOARD_SIZE];

private:
	const char playerX;
	const char playerO;
	char winner;
	char currentPlayer;
	int numMoves;
};