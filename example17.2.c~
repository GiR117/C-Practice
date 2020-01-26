#include <stdio.h>
#include <stdlib.h>

//A program to take integer input from user and print out multiplication tables
//Also to for the programmer to learn about malloc() and free()

//function prototypes
void DataMultiple(int max, int *ptr);
void TablePrint(int max, int *ptr);

//main
main()
{
  int *ptr_int, max;
  int termination;
  char key = 'c';

  max = 0;
  termination = 0;
  while (key != 'x') {
    printf("Please enter a single digit number:\n");
    scanf("%d", &max);

    ptr_int = malloc(max * max * sizeof(int)); //call malloc to allocate mememory
    if (ptr_int != NULL){
      DataMultiply(max, ptr_int);
      TablePrint(max, ptr_int);
      free(ptr_int);
    } else {
      printf("malloc() function failed.\n");
      termination = 1;
      key = 'x'; //stop the loop
    }
    printf("\n\nPress the x key to quit or any other key to continue.\n");
    scanf("%s", &key);
  }
  printf("Bye!\n");
  return termination;

}

//Function definitions
void TablePrint(int max, int *ptr)
{
  int i, j;

  printf("The multiplication table of %d is:\n",
	 max);
  printf(" ");
  for(i=0; i < max; i++)
    printf("%4d", i+1);
  printf("\n");
  for(i=0; i< max; i++)
    printf("----", i + 1);
  for(i=0; i < max; i++)
    printf("\n%d|", i+1);
      for(j=0;j<max;j++)
	printf("%3d", *(ptr + i * max + j));
}
