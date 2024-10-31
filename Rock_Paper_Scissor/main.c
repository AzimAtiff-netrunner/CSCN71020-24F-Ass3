#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

const char* RPSfunction(char* P1, char* P2) {

	int P1size = sizeof(P1);
	int P2size = sizeof(P2);


	//input
	printf("Welcome to a game of Rock Paper Scissors\n");
	printf("\nCan Player 1 please enter their choice, either Rock, Paper, or Scissor: \n");
	scanf_s("%s", P1, (unsigned)P1size);
	for (int i = 0; i <= P1[i]; i++) {
		P1[i] = tolower(P1[i]);
	}

	printf("Can Player 2 please enter their choice: \n");
	scanf_s("%s", P2, (unsigned)P2size);
	for (int j = 0; j <= P2[j]; j++) {
		P2[j] = tolower(P2[j]);
	}

	//Process
	if (strcmp(P1, P2) == 0) {
		printf("Draw");
	}
	else if (strcmp("rock", P1) == 0 && strcmp("scissor", P2) == 0) {
		printf("Player 1 Wins");
	}
	else if (strcmp("scissor", P1) == 0 && strcmp("paper", P2) == 0) {
		printf("Player 1 Wins");
	}
	else if (strcmp("paper", P1) == 0 && strcmp("rock", P2) == 0) {
		printf("Player 1 Wins");
	}
	else {
		printf("Player 2 Wins");
	}

}
int main(void) {

	char P1[11]; 
	char P2[11]; 

	RPSfunction(P1, P2);

	return 0;
}