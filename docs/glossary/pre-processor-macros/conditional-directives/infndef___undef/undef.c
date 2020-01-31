/*
 * Use #undef to set an existing macro to be undefined. This may be useful if a macro ceases to be helpful.
 * This is a trivial example, but should illustrate the point.
 *
 * Another use of `indef` is to prevent a header from being multiple times. For example, you may have a header file
 * that's required in another header file thats later included in the source code file. Using `ifndef` we can tell
 * the preprocessor to only load the code, if it hasn't been included already.
 * https://www.cprogramming.com/tutorial/cpreprocessor.html
*/
#include <stdio.h> 
#include <stdlib.h>

#define FAVORITE_NUMBER 3
#undef FAVORITE_NUMBER

#ifndef FAVORITE_NUMBER
  #define FAVORITE_NUMBER 100
#endif

int main(void) {
  printf("%i is my favorite number", FAVORITE_NUMBER);
}
