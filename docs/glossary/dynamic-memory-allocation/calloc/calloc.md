# Calloc
`calloc` is used to allocate memory on the heap at runetime, similar to `malloc`, except it's takes 2 function arguments, instead of 1.
and it makes all memory cells it creates in the heap start with value 0, until they are re-assigned

Any time you use `calloc` don't forget to use `free` later!
```c
#include <stdio.h>
#include <stdlib.h>

void show_vector(double vec[], int n) {
  int i;
  for (i=0; i<n; i++) {
    printf("vec[%d]=%.3f\n", i, vec[i]);
  }
  printf("\n");
}


int main(void) {
  double *vec = calloc(3, sizeof(double));  // allocate 3 memory slots on the heap to store doubles

                                        // Now, our vector looks like this: [0.000, 0.000, 0.000]

  vec[1] = 3.14;
  show_vector(vec, 3);                   // Now, our vector looks like this: [0.000, 3.14, 0.000]

  vec = realloc(vec, sizeof(double)*5);
  show_vector(vec, 5);                   // Now, our vector looks like this: [0.000, 3.14, 0.000, 0.000, 0.000] 

  vec[3] = 7.77;                         
  show_vector(vec, 5);                   // Now, our vector looks like this: [0.000, 3.14, 0.000, 7.77, 0.000] 

  free(vec);                            // we cleared our vector from the heap!
  return 0;
}
```