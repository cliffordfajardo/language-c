# Free

You should always use `free()` to deallocate memory that has been allocated with `malloc()` or `calloc()`,
as soon as you don’t need it any more. Any memory allocated with `malloc()` or `calloc()` is reserved,
in other words, it can’t be used (for good reason) until it is deallocated with `free()`.

If you fail to deallocate memory then you will have what’s called a memory leak. If your program uses a lot
of heap memory, that is not deallocated, and runs for a long time, then you might find that your computer
(and your program) slows down, or suddenly freezes, or crashes, because there is no more memory to be allocated.


The rule is, anytime you use `malloc()` or `calloc()`, you must also use `free()`.


```c
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
```
