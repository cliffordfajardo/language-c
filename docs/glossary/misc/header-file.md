# Header File


# What is a header file?


### Why is it called a header file?


## Example
File: `my_header.h`

```c
#define EXIT_SUCCESS 0
#define MY_MACRO_YO "This comes from the macro I created in my_header.h called My_MACRO_YO\n"
```

Usage: `my_program.c`

```c
#include <stdio.h>
#include <stdlib.h>
#include "my_header.h"

int main(void) {
  // The preproccessor will remove comments. Inspect the `my_program_after_preproccessing.i file`
  printf ("Hello World\n");
  printf (MY_MACRO_YO);
  return EXIT_SUCCESS;
}
```

## Resources
- http://umich.edu/~eecs381/handouts/CHeaderFileGuidelines.pdf