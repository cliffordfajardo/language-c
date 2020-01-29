#include <stdio.h>
#include <stdlib.h>

double *multiplyByTwo (double *input) {
  double *twice = (double*)malloc(sizeof(double));
  *twice = *input * 2.0;
  return twice;
}

int main (int argc, char *argv[]){
  int *age = (int*)malloc(sizeof(int));
  *age = 30;

  double *salary = (double*)malloc(sizeof(double));
  *salary = 12345.67;

  double *myList = (double*)malloc(3 * sizeof(double));
  myList[0] = 1.2;
  myList[1] = 2.3;
  myList[2] = 3.4;

  double *twiceSalary = multiplyByTwo(salary);

  printf("double your salary is %.3f\n", *twiceSalary);

  
  free(age);
  free(salary);
  free(myList);
  free(twiceSalary);

  return 0;
}