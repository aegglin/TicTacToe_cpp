#include <iostream>
#include "TicTacToe.h"

TicTacToe::TicTacToe() 
    : playerX('X'), playerO('O'), winner(' '), currentPlayer(playerX), numMoves(0) 
{
    for (int r = 0; r < TicTacToe::BOARD_SIZE; r++) {
        for (int c = 0; c < TicTacToe::BOARD_SIZE; c++) {
            board[r][c] = ' ';
        }
    }
}

    int TicTacToe::getNumMoves() const {
        return numMoves;
    }

    char TicTacToe::getCurrentPlayer() const {
        return currentPlayer;
    }

	void TicTacToe::printBoard() const{
        std::cout << "   |   |   " << std::endl;
        std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
        std::cout << "___|___|___" << std::endl;
        std::cout << "   |   |   " << std::endl;
        std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
        std::cout << "___|___|___" << std::endl;
        std::cout << "   |   |   " << std::endl;
        std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;
        std::cout << "   |   |   " << std::endl;
	}

    char TicTacToe::getWinner() {
        for (int r = 0; r < TicTacToe::BOARD_SIZE; r++) {
            if (board[r][0] != ' ' && board[r][0] == board[r][1] && board[r][0] == board[r][2]) {
                winner = board[r][0];
            }
        }
        for (int c = 0; c < TicTacToe::BOARD_SIZE; c++) {
            if (board[0][c] != ' ' && board[0][c] == board[1][c] && board[0][c] == board[2][c]) {
                winner = board[0][c];
            }
        }
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
            winner = board[0][0];
        }
        else if (board[2][0] != ' ' && board[2][0] == board[1][1] && board[2][0] == board[0][2]) {
            winner = board[2][0];
        }
        return winner;
    }

    char TicTacToe::getBoardAt(const int r, const int c) const {
        return board[r][c];
    }
    
    void TicTacToe::makeMove(const int r, const int c) {
        board[r][c] = currentPlayer;
        numMoves++;
        currentPlayer = currentPlayer == playerX ? playerO : playerX;
    }

    bool TicTacToe::isValidMove(const int r,const int c) const{
        if (r < 0 || r > 2 || c < 0 || c > 2) {
            std::cout << "Invalid input, try again" << std::endl;
            return false;
        }
        else if (board[r][c] != ' ') {
            std::cout << "Tile is full, try again." << std::endl;
            return false;
        }
        return true;
    }