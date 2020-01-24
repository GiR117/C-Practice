#include <stdio.h>

int n, j, sum = 0;

int main()
{
	int i;
	printf("Please enter a number: \n");
	scanf("%i", &n);

	if (n % 2 == 0) {
		for (i = 0; i < n; i = i + 2) {
			sum = sum + i;
			j++; }
	} else {
		for (i = 0; i < n - 1; i = i + 2) {
			sum = sum + i;
			j++; }
		sum = sum + (n - 1);
	}

	printf("There total number of even numbers between 0 and %i is: %i.\nThe sum of those numbers is: %i\n", n, j, sum);

return 0;
}
