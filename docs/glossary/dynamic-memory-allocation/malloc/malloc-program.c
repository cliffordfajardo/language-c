#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int year;
  int month;
  int day;
} date;

int main(void) {
  date *my_list_of_dates = malloc(sizeof(date) * 3);  // care a pointer variable `my_list_of_dates` which points to a block of memory on the heap big enough for 3 `date` structs.

  for (int i=0; i<3; i++) {
    my_list_of_dates[i].year = 2012-i;
    my_list_of_dates[i].month = 1 + i;
    my_list_of_dates[i].day = 15 + i;
  }

  for (int i=0; i<3; i++) {
    printf("my_list_of_dates[%d] = %d/%d/%d\n", i, my_list_of_dates[i].day, my_list_of_dates[i].month, my_list_of_dates[i].year);
  }

  free(my_list_of_dates);
  return 0;
}