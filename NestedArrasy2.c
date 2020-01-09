#include <stdio.h>
#include <stdlib.h>

// A look at 2D arrays and nested for loops to read through the whole array
int main () {
	//this is how to make a 2d array, set the height then the width, and then fill it with data.
	int nums[3][2] = {
					{1, 2},
					{3, 4},
					{5, 6}
					};
	
	int i, j;
	//this nest look will run three times to hit each row of the 2d array
	for (i = 0; i < 3; i++) {
		//this for loop will run twice to read each space per row
		for (j = 0; j < 2; j++) {
			//this printf reads and prints each space, first [0,0] then [0,1], then back to the top for loop for [1,0]
			printf("%d,", nums [i][j]);
		}
		printf("\n");
	}

	return 0;
}