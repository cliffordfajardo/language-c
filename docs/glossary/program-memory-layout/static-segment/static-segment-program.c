#include <stdio.h>
int my_int = 10;  // allocated in static segment, because this is a global variable. Global variables cannot be freed while a program is running

int main() {
  printf("my_int = %i\n", my_int);
  return 0;
}