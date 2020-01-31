/**
 * When we compile our code, the C pre processor will load the two files above and put them in this file.
 * If you want to see an example of what this file looks like after the pre-processor has replaced the
 * include statements look at the folder `how-the-c-compiler-toolchain-works/step001-preprocessor`
*/

#include <stdio.h> 
#include "program1.h"; // user created header files are wrapped in double quotes

int main() {
  printf("%i is my favorite number", FAVORITE_NUMBER);
}
