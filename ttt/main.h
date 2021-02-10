#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <stdlib.h>
#include <iostream>

bool board[3][3][3];
bool deadBoards[3];

bool isTaken(int l1, int l2, int l3) {
	return board[l1][l2][l3];
}

bool isBoardDead(int l1) {
	return deadBoards[l1];
}

void setBoard(int l1, int l2, int l3, bool value) {
	board[l1][l2][l3] = value;
}

void checkBoardDead() {
	if (board[0][0][0] && board[0][0][1] && board[0][0][2]) {
		deadBoards[0] = true;
	}
	if (board[1][0][0] && board[1][0][1] && board[1][0][2]) {
		deadBoards[0] = true;
	}
	if (board[2][0][0] && board[2][0][1] && board[2][0][2]) {
		deadBoards[0] = true;
	}
	for (int i = 0; i < 3; i++) {
		if (board[i][0][0] && board[i][0][1] && board[i][0][2]) {
			deadBoards[0] = true;
		}
		if (board[i][1][0] && board[i][1][1] && board[i][1][2]) {
			deadBoards[i] = true;
		}
		if (board[i][2][0] && board[i][2][1] && board[i][2][2]) {
			deadBoards[i] = true;
		}

		if (board[i][0][0] && board[i][1][0] && board[i][2][0]) {
			deadBoards[i] = true;
		}
		if (board[i][0][1] && board[i][1][1] && board[i][2][1]) {
			deadBoards[i] = true;
		}
		if (board[i][0][2] && board[i][1][2] && board[i][2][2]) {
			deadBoards[i] = true;
		}

		if (board[i][0][0] && board[i][1][1] && board[i][2][2]) {
			deadBoards[i] = true;
		}
		if (board[i][2][0] && board[i][1][1] && board[i][0][2]) {
			deadBoards[i] = true;
		}
	}
}

bool isGameLost() {
	return deadBoards[0] && deadBoards[1] && deadBoards[2];
}

void gameReset() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				board[i][j][k] = false;
			}
		}
		deadBoards[i] = false;
	}
}
#endif /* MAIN_H */