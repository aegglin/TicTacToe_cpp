#include "TicTacToe.h"
#include "TicTacToeUserGame.h"

#include <iostream>

char TicTacToeUserGame::playGame() {
    int r = -1;
    int c = -1;

    TicTacToe ttt = TicTacToe();

    char winner = ttt.getWinner();
    bool hasValidInput = false;
    while (winner == ' ' && ttt.getNumMoves() < TicTacToe::NUM_MOVES) {
        ttt.printBoard();
        hasValidInput = false;

        while (!hasValidInput) {
            std::cout << "Current player is: " << ttt.getCurrentPlayer() << std::endl;
            std::cout << "Enter r c from 0-2 for row and column: ";
            std::cin >> r >> c;
            hasValidInput = ttt.isValidMove(r, c);
            if (!hasValidInput) {
                ttt.printBoard();
                std::cin.clear(); //clear error flags
                std::cin.ignore(10000, '\n');
            }
        }
        ttt.makeMove(r, c);
        winner = ttt.getWinner();
    }

    ttt.printBoard();

    if (winner != ' ') {
        std::cout << "Player " << winner << " is the winner!" << std::endl;
    }
    else {
        std::cout << "Cat's game!" << std::endl;
    }
    return winner;
}