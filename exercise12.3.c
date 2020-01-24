#include <stdio.h>

//measure size of a 2d array and then print each char in an array

int main()
{
  char letter[2][6] = {{'1','2','3','4','5','6'},{'a','b','c','d','e','f'}};
  int i,j;

  printf("The size of our array letters is %lu\n", sizeof(letter));

  
  for(i=0;i<3;i++) {
    printf("\n");
    for(j=0;j<6;j++)
      printf("%c ", letter[i][j]);
    }
  printf("\n");
  return 0;
}
