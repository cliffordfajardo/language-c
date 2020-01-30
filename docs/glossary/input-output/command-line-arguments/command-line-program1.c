#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  printf("argc = %d\n", argc);
  int sum = atoi(argv[1]) + atoi((argv[2]));

  printf("sum = %i\n", sum);
  return 0;
}