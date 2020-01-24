#include <stdio.h>

//messing with pointers for learning

int main()
{
  int age;
  char firstname[20];
  char lastname[20];

  printf("What is your full name? ");
  scanf("%19s %19s", firstname, lastname);
  printf("Hello %s %s!\nAnd how old are you? ", firstname, lastname);
  scanf("%i", &age);
  printf("%i is a great age!\n", age);
  return 0;
}
