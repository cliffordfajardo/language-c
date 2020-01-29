#include <stdio.h>
int main() {
  int *z = (int *)malloc(20);   // z pointer variable will point to dynamically allocated memory in the heap, but the pointer variable itself `z` is a local variable and will be put on the stack segment
  printf("z = %i", z);
  return 0;
}