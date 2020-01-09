#include <stdio.h>
#include <stdlib.h>

//learning to write to files, make files, changing files

int main() {
	char line[255];

	/*FILE is the fuction, fpointer is the name we are assigning, fopen is a built in fuction, 
	we are working on a text file called employees.txt, next we can have; r for read, w for write, or a for append. 
	If you do not specify a absolute or relative path it will be created in your current working directory. */
	FILE * fpointer = fopen("employees.txt", "r");

	//fgets will allow us to read the lines of the file one by one.
	//first give it a place to store what it reads, in this case we created a char var for this.
	//then give it a max
	//then tell it where we are reading from
	fgets(line, 255, fpointer);

	//reads and prints the first line of the text doc 
	printf("%s\n", line);

	//if we use it again, the pointer has moved to the second line of employees.txt
	fgets(line, 255, fpointer);
	printf("%s\n", line);

	//always include this to save and quit the program when you are done
	fclose(fpointer);
	return 0;
}