File Edit Options Buffers Tools C Help
#include <stdio.h>

//print each char in an array

int main()
{
  char letter[] = {'a','b','c','d','e','\0'};
  int i;

  for(i=0;letter[i];i++)
    printf("%c\n",letter[i]);
  return 0;
}
