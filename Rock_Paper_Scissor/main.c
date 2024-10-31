#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

const char* RPSfunction(const char* P1,const char* P2) {


	//Process
	if ((strcmp("Rock", P1) != 0 && strcmp("Scissors", P1) != 0 && strcmp("Paper", P1) != 0) ||
		(strcmp("Rock", P2) != 0 && strcmp("Scissors", P2) != 0 && strcmp("Paper", P2) != 0)) {
		return "Invalid";
	}

	if (strcmp(P1,P2) == 0) {
		return "Draw";
	}
	else if (strcmp("Rock", P1) == 0 && strcmp("Scissors", P2) == 0) {
		return "Player 1";
	}
	else if (strcmp("Scissors", P1) == 0 && strcmp("Paper", P2) == 0) {
		return "Player 1";
	}
	else if (strcmp("Paper", P1) == 0 && strcmp("Rock", P2) == 0) {
		return "Player 1";
	}
	else {
		return "Player 2";
	}
}

int main(void) {
	return 0;
}