#include <stdio.h>
#include <stdlib.h>

// Leraning about memory addresses
int main () {
	//here are a couple of variables with assigend values
	int age = 32;
	double gpa = 3.7;
	char grade = 'A';

	//%p is how you print out a pointer, or the HEX address of where the data is storedin RAM or physical memory
	printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

	return 0;
}