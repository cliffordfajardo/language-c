#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *vec;                             // create a pointer variable `vec`
  vec = (int*)malloc(sizeof(int) * 3);  // vec to be a pointer pointing two 3 int slots in memory.
  vec[0] = 1;
  vec[1] = 2;
  vec[2] = 3;
  printf("vec[2]=%d\n", *(vec+2)); // `*(vec+2) sames as `vec[2]`
  free(vec);
  return 0;
}