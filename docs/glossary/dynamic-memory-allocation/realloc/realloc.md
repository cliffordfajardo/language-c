# Realloc

`realloc` lets us resize an allocation we made on the heap. A good example of this is having an list that starts off with 3 items,
but later we want to resize it to make it larger:

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