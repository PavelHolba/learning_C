#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y;
  char term;
  printf("This is basic demonstration of binary operations in language C. You will be asked to provide two numbers x and y.\n");
  printf("Please enter an integer x: ");
  if (scanf("%d%c", &x, &term) != 2 || term != '\n') {  
    printf("Input is not an integer.\n"); 
    return 1;  // Exit with an error status
  }
  printf("Please enter an integer y: ");
  if (scanf("%d%c", &y, &term) != 2 || term != '\n') {  
    printf("Input is not an integer.\n"); 
    return 1;  // Exit with an error status
  }
  printf("x+y = %d\n", x+y);
  printf("x-y = %d\n", x-y);
  printf("x*y = %d\n",x*y);
  printf("x/y = %f\n",(float) x/y);
  printf("x%%y = %d\n", x%y); // modulus (remainer) of x/y
  printf("bitwise AND x&y = %d\n", x&y); // bitwise AND
  printf("bitwise OR x|y = %d\n", x|y); // bitwise OR
  printf("bitwise XOR x^y = %d\n", x^y); // bitwise XOR
  printf("right bitwise shift of x by y positions: x>>y = %d, this should be x/pow(2,y) (discarding any remainer). Function pow from <math.h> gives exponentiation.\n", x>>y); // right bitwise shift of x by y positions
  /*x |= y; // x = x|y
  x ^= y; // x = x^y
  x >>= y; // x = x>>y
  x <<= y; // x = x<<y*/

  /* TODO
  numbers out of bound of int
  solution for floats
  */

  return 0;
}