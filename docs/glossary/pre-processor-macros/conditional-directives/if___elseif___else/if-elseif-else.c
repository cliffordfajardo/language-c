#include <stdio.h> 
#include <stdlib.h>

#define FAVORITE_NUMBER 7 
   
#if FAVORITE_NUMBER > 200 
  #undef FAVORITE_NUMBER 
  #define FAVORITE_NUMBER 200 

#elif FAVORITE_NUMBER < 50 
  #undef FAVORITE_NUMBER 
  #define FAVORITE_NUMBER 50 

#else 
  #undef FAVORITE_NUMBER 
  #define FAVORITE_NUMBER 100 
#endif 

int main(void) {
  printf("%i is my favorite number", FAVORITE_NUMBER);
}
