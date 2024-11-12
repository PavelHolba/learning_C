#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double x, y;
  char term;
  printf("This is basic demonstration of binary operations in language C. You will be asked to provide two integer numbers x and y.\n");
  printf("Please enter an integer x: ");
  if (scanf("%lf%c", &x, &term) != 2 || term != '\n') {  
    printf("Input for x is not a number.\n"); 
    return 1;  // Exit with an error status
  }
  printf("Please enter an integer y: ");
  if (scanf("%lf%c", &y, &term) != 2 || term != '\n') {  
    printf("Input for y is not a number.\n"); 
    return 1;  // Exit with an error status
  }
  if (x == (int)x && y == (int)y) {
    int x_int = (int)x, y_int = (int)y;
    printf("x+y = %d\n", x_int+y_int);
    printf("x-y = %d\n", x_int-y_int);
    printf("x*y = %d\n", x_int*y_int);
    printf("x/y = %lf\n",(double) x_int/y_int);
    printf("x%%y = %d\n", x_int%y_int); // modulus (remainer) of x/y
    printf("bitwise AND x&y = %d\n", x_int&y_int); // bitwise AND
    printf("bitwise OR x|y = %d\n", x_int|y_int); // bitwise OR
    printf("bitwise XOR x^y = %d\n", x_int^y_int); // bitwise XOR
    printf("right bitwise shift of x by y positions: x>>y = %d, this should be x/pow(2,y) (discarding any remainer). Function pow from <math.h> gives exponentiation.\n", x_int>>y_int); // right bitwise shift of x by y positions
    printf("x^y = %d, this is example of using function from <math.h>, need to use -lm flag when compiling though.\n", (int)pow(x_int,y_int));
  } else {
    printf("At least one of the number is not integer, but let us demonstrate some operations with floats.\n");
    printf("x+y = %lf\n", x+y);
    printf("x-y = %lf\n", x-y);
    printf("x*y = %lf\n",x*y);
    printf("x/y = %lf\n",x/y);
    printf("x^y = %lf, this is example of using function from <math.h>, need to use -lm flag when compiling though.\n", pow(x,y));
  }
 

  /* TODO
  numbers out of bound of int
  */

  return 0;
}