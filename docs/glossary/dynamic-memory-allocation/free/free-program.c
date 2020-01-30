#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int year;
  int month;
  int day;
} date;

int main(void) {
  date *my_list_of_dates = malloc(sizeof(date) *1);  // care a pointer variable `my_list_of_dates` which points to a block of memory on the heap big enough for 3 `date` structs.
  my_list_of_dates[0].year = 2012;
  my_list_of_dates[0].month = 1;
  my_list_of_dates[0].day = 15;


  free(my_list_of_dates);
  return 0;
}