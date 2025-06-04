#pragma once
class TicTacToe {
private:
	char board[3][3];
	const char playerX;
	const char playerO;
	char winner;
	char currentPlayer;
	int numMoves;

public:
	TicTacToe();
	char getCurrentPlayer() const;
	void printBoard() const;
	char getWinner();
	void makeMove(int r, int c);
	bool isValidMove(int r, int c) const;
	int getNumMoves() const;
};