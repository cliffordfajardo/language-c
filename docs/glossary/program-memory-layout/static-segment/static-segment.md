# Static Segment

Information for each global variable in the source files is saved in the executable file. 
When the program runs, the loader allocates a static segment and loads the data for each global variable into it.

<img src="../images/memory-layout-of-running-program.png" height="400px">

```c
#include <stdio.h>
int my_int = 10;          // allocated in static segment, because this is a global variable. Global variables cannot be freed while a program is running

int main() {
  printf("%i\n", my_int);
  return 0;
}
```