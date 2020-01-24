#include <stdio.h>
#include <string.h>

int main()
{
  char str1[]="Copy this string";
  char str2[30];
  char str3[30];

  int i;

  //Copy with strcpy()

  strcpy(str2, str1);

  //without strcpy()

  for(i=0; str1[i]; i++)
    str3[i]=str1[i];
  str3[i]='\0';

  //display the strings
  printf("The contents of string 1 are: %s\n", str1);
  printf("The contents of string 2 are: %s\nThis used strcpy to copy the string.\n", str2);
  printf("The contents of string 3 are %s\nThis used a for loop to copy the string.\n", str3);

  return 0;
}
