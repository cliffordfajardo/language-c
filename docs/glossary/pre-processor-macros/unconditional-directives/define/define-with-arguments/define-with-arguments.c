/**
 * For an awesome in depth guide: http://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Macros.html
 * OR look at the folder calld `testing-with-minunit` inside this repo.
*/
#include <stdio.h> 
#include <stdlib.h>

#define Square(x) ((x)*(x)) // Square(2)      expands to: ((2)*(2)),
#define BadSquare(x) x*x    // BadSquare(3+3) expands to: 3+3*3+3
// We use parenthesis inside `Square` to avoid any issue with operator precedence rules.

int main(void) {
  printf("Result is %i\n", Square(2));       //4
  printf("Result is %i\n", BadSquare(3+3));  //15
  printf("Result is %i\n", Square(3+3));     //36
}
