#include <stdio.h>
int main () {
  int grades[3];
  grades[0] = 0;
  grades[1] = 1;
  grades[2] = 2;

  for (int i=0; i<3; i++) {
    printf("grades[%d]=%d\n", i, grades[i]);
  }

  return 0;
}