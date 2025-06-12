#include <iostream>
#include "TicTacToeSimulator.h"
#include "TicTacToe.h"

int main()
{
    TicTacToeSimulator simulator(10);
    simulator.simulateGames();

    //TicTacToe ttt;
    //ttt.makeMove(0, 0); // X
    //ttt.makeMove(1, 0); // O
    //ttt.makeMove(0, 2); // X
    //ttt.makeMove(0, 1); // O
    //ttt.makeMove(2, 1); // X
    //ttt.makeMove(1, 1); // O
    //ttt.makeMove(1, 2); // X
    //ttt.makeMove(2, 0); // O
    //ttt.makeMove(2, 2); // X

    //ttt.printBoard();
    //std::cout << "Winner is: " << ttt.getWinner() << std::endl;
}