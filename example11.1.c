#include <stdio.h>

//practicing with addresses and pointers

main()
{
  int x;
  float y;
  char c;

  printf("x: address = %p, content=%d\n", &x, x);
  printf("y: address = %p, content=%3.3f\n", &y, y);
  printf("c: address = %p, content=%c\n", &c, c);

  x = 5;
  y = 545.313;
  c = 'A';

  printf("x: address = %p, content=%d\n", &x, x);
  printf("y: address = %p, content=%3.3f\n", &y, y);
  printf("c: address = %p, content=%c\n", &c, c);

  return 0;
}
