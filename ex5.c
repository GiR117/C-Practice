#include <stdio.h>
//include standard input and output .Headerfile
/* This is a comment. */
int main(int argc, char *argv[])
//initialize main (OS), argv and argc are how command line arguments are passed to main() in C and C++.
//argc will be the number of strings pointed to by argv.
//This will (in practice) be 1 plus the number of arguments, as virtually all implementations will prepend the name of the program to the array.
{
  int distance = 100;
  //initialize value distance = 100

  //this is also a comment
  printf("You are %d miles away.\n", distance);
//print "you are decimal value miles away", value is distance
  return 0;
//loop/continue = false
}
