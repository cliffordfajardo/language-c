#include<stdio.h> 
int fun()  { 
  static int count = 0; 
  count++; 
  return count; 
} 
   
int main()  { 
  printf("%d ", fun()); 
  printf("%d ", fun()); 
  // printf("%d ", count); WONT WORK
  return 0; 
}