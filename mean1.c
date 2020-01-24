#include <stdio.h>

float mean(int a, int b);

int main()
{
  int n1, n2;

  printf("Please enter two numbers seperated by a space: \n");
  scanf("%i %i", &n1, &n2);

  printf("The mean of %i and %i is: %f\n", n1, n2, mean(n1, n2));

  return 0;
}

float mean (a, b)
{
  float mean = 0;
  mean = (a + b) / 2;

  return mean;
}
