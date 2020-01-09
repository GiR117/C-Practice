#include <stdio.h>
#include <stdlib.h>


int main() {
	int secretNum = 7;
	int guess;
	int limit = 0;
	int loss = 0;

	while (guess != secretNum && loss == 0) {
		if(limit < 3){
			printf("What is the secret number? \nEnter your guess: ");
			scanf("%d", &guess);
			limit++;
		} else {
			loss = 1;
		}

	}

	if (secretNum == guess) {
		printf("Great guess, you win!\n");
	} else {
		printf("Sorry, you didn't get it in three tries.\n");
	}
	return 0;
}