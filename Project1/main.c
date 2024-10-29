#include <stdio.h>
#include <string.h>

char* Game(char* player1, char* player2);


int main(void)
{

	return 0;
}



char* Game(char* player1, char* player2) {

	if (strcmp(player1, player2) == 0) { //returns draw if both players pick the same
		return "Draw";
	}
	 else if (strcmp(player1, "rock") == 0 && strcmp(player2, "paper") == 0) { //player one winning
		return "Player1";
	}
	else if (strcmp(player1, "scissors") == 0 && strcmp(player2, "paper") == 0) {
		return "Player1";
	}
	else if (strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0) {
		return "Player1";
	}
	else if (strcmp(player2, "rock") == 0 && strcmp(player1, "paper") == 0) { //player two winning
		return "Player2";
	}
	else if (strcmp(player2, "scissors") == 0 && strcmp(player1, "paper") == 0) {
		return "Player2";
	}
	else if (strcmp(player2, "paper") == 0 && strcmp(player1, "rock") == 0) {
		return "Player2";
	}
	
	return "Invalid"; //if any input other than rock, paper, or scissors is used
	
}