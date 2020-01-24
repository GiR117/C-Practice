#include <stdio.h>

//put a string in an array and print it out

int main()
{
  char message[]={'I',' ','t','h','i','n','k',' ','C',' ','i','s',' ','c','o','o','l','\0'};

  printf("What do your think of the C programming language?\n");
  printf("%s\n", message);
  
  return 0;
}
