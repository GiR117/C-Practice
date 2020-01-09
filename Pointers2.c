#include <stdio.h>
#include <stdlib.h>

// Leraning about memory addresses
int main () {
	//here is a variable
	int age = 32;

	//%p is how you print out a pointer, or the HEX address of where the data is storedin RAM or physical memory
	printf("age's memory address is: %p\n", &age);

	return 0;
}