#include <stdio.h> 
int main()  { 
  register int i = 10;  // Register can only be used within a block (local),

  printf("%d\n", i); 
  return 0; 
} 