#include <stdio.h>
#include <stdlib.h>

//learning to write to files, make files, changing files

int main() {
	/*FILE is the fuction, fpointer is the name we are assigning, fopen is a built in fuction, 
	we are working on a text file called employees.txt, next we can have; r for read, w for write, or a for append. 
	If you do not specify a absolute or relative path it will be created in your current working directory. */
	FILE * fpointer = fopen("employees.txt", "w");

	//easiest way to write info to a file is fprintf, just pass in the pointer variable for the destination and then enter what you want to write. 
	fprintf(fpointer, "Sterling Archer, Lead Spy\nPam Poofy, HR\nCeril Figgis, Accounting\nMalory Archer, CEO\nLana Kane, Badass\n");


	fclose(fpointer);
	return 0;
}