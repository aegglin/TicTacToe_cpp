#pragma once
class TicTacToe {
public:
	static constexpr int BOARD_SIZE = 3;
	static constexpr int NUM_MOVES = 9;

	TicTacToe();
	inline char getCurrentPlayer() const { return currentPlayer; }
	inline int getNumMoves() const { return numMoves; };
	inline char getBoardAt(const int r, const int c) const { return board[r][c]; }

	void printBoard() const;
	void makeMove(const int r, const int c);
	bool isValidMove(const int r, const int c) const;
	char getWinner();

	void reset();
	char board[BOARD_SIZE][BOARD_SIZE];
	bool operator==(const TicTacToe& other) const;

private:
	const char playerX;
	const char playerO;
	char winner;
	char currentPlayer;
	int numMoves;
};