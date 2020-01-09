#include <stdio.h>

/*  */

int main()
{
	char grade;
	printf("Please enter your latest test grade: \n");
	scanf("%c", &grade);

	switch (grade) {
		case 'A':
			printf("You did great!\n");
			break;
		case 'B':
			printf("You did pretty well.\n");
			break;
		case 'C':
			printf("You average.\n");
			break;
		case 'D':
			printf("Yikes!\n");
			break;
		case 'F':
			printf("Oh no! You flunked!\n");
			break;
		default: 
			printf("Invalid entry.\n");
	}
	return 0;
}