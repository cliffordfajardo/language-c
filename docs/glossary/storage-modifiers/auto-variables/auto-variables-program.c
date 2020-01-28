#include <stdio.h>
// auto int my_int = 0; NOT ALLOWED in global, plus it doesnt make sense

int main() {
  auto int my_int = 1;
  
  {
    auto int my_int = 2;
    printf ("%d \n", my_int);

    {
      auto int my_int = 3;
      printf ("%d \n", my_int);
    }

  }

  
  printf( "%d \n", my_int);
}