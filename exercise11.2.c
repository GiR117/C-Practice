#include <stdio.h>

int main()
{
  double flt_num = 123.45;
  double *pnt_flt = &flt_num;

  printf("The value of flt_num is: %3.2f\n", flt_num);
  printf("With the pointer the value of flt_num is pnt_num=%3.2f\n", *pnt_flt);
  *pnt_flt = 543.21;
  printf("After the update flt_num=%3.2f and pnt_flt=%3.2f\n", flt_num, *pnt_flt);
  
  return 0;
}
