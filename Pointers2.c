#include <stdio.h>
#include <stdlib.h>

// Leraning about memory addresses
int main () {

	//variables
	int age = 32;
	double gpa = 3.7;
	char grade = 'A';

	//creating a variable pointer, you first need to store the memory address of a variable that already exists in your program.
	//To do this pick a variable you have created, use type *, the lower p, and the name of the variable = &variable
	int * pAge = &age;
	double * pGpa = &gpa;
	char * pGrade = &grade;


	//%p is how you print out a pointer, or the HEX address of where the data is storedin RAM or physical memory
	printf("age's memory address is: %p\n", &age);

	return 0;
}