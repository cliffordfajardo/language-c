#include <stdio.h>
int main() {
  int my_int = 0;
  printf("my_int = %i\n", my_int); // allocated on the stack segment of memory, since we are creating this function in a code block.
  return 0;
}