#include <stdarg.h>
#include <stdio.h>  // in order to use the handful of functions necessary to work with the argument list.

double average(int num,...) {
  va_list valist;
  double sum = 0.0;

  va_start(valist, num); /* initialize valist for num number of arguments */

   
  for (int i = 0; i < num; i++) {
    sum += va_arg(valist, int); /* access all the arguments assigned to valist */
  }
	
  /* clean memory reserved for valist */
  va_end(valist);

  return sum/num;
}

int main() {
  printf("Average of 2, 3, 4, 5 = %f\n", average(4,  2,3,4,5));
  printf("Average of 5, 10, 15 = %f\n",  average(3,  5,10,15));
}