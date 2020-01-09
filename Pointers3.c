#include <stdio.h>
#include <stdlib.h>

// Leraning about dereferencing memory addresses
int main () {

	//variable and pointer to its memory address
	int age = 32;
	int * pAge = &age;

	//%p is how you print out a pointer, or the HEX address of where the data is storedin RAM or physical memory
	printf("age's memory address is: %p\n", &age);

	//when you derefernce a pointer or memory address, all you are doing is going to the address and gradding the data that is there. 
	//To do this us an astarix before the pointer name and the proper data type (for age that is int or %d) for the data. 
	printf("Age is equal to: %d\n", *pAge);

	return 0;
}