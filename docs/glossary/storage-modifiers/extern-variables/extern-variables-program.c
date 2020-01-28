#include <stdio.h>

extern int my_var_1 = 1;    // explicit global: which is nice, but use of `extern` keyword is not necessary since we are in the global scope already.
int my_var_2 = 2;          // implicit global:  because we are in the global scope, our program know's this this should be a global.


extern int my_var_3;      // this is the preferred way, the other 2 are valid

int main() {
  int my_var_3 =  3;      // this variable will now get added to the global scope!

  printf("The value of extern variables my_var1 and my_var2 : %d, %d\n", my_var_1, my_var_2);
  my_var_1 = 15;
  my_var_2 = 16;
  
  printf("The value of extern variables are now my_var1 and my_var2 : %d, %d\n", my_var_1, my_var_2); 
  return 0;
}
