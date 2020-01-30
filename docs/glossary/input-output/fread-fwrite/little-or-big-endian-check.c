#include <stdio.h>
int main(){
  int n = 1;
  // little endian if true
  if(*(char *)&n == 1) {
    printf("Little Endian!");
  }
  return 0;
}


