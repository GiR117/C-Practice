#include <stdio.h>

int main ()
{
  int age = 10;
  int height = 72;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;
}
//  So a lot is going on here.... First you are including another file called a header file
// called stdio.h. This tells the computer that youre going to use the standard/input functions
//  Then you are using a variable named age and setting it to 10
//  Then you are using a variable called height and setting it to 72
//  Then you are using the printf function to print the age and height
//  Int he printf youll notice that youre passing a sting and  its format sting like in many other languages
//  After this format stirng you put the vairales that should be  "replaced" into the format string by printf
