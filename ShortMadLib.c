#include <stdio.h>
#include <stdlib.h>

char userName[20];
int userAge;

int main() {
	 printf("Please enter your name: \n");
	 	scanf("%s", userName);
	 printf("Please enter your age: \n");
	 	scanf("%d", &userAge);

	 printf("There was once a user named %s.\n", userName );
	 printf("They were %d years old.\n", userAge);
	 printf("At somepoint %s got on github and downloaded a simple C program.\n", userName);
	 printf("%s gave the program their name and age.\n", userName);
	 printf("This allowed the program to talk to %s.\n", userName);

	 return 0;
}