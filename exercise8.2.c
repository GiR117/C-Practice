#include <stdio.h>
int x = 0xEFFF;
int y = 0x1000;

int main()
{
  printf("x = %d or %u\n", !x, !x);
  printf("y = %d or %u\n", !y, !y);

  return 0;
}
