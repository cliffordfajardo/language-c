# Directives


### What are Directives?
Directives are commands, given to the C compiler's [preprocessor], that get
added to our programs source code before it actually get's run.


### Why are they called directives?
If we define the word directive, the definition is to give an instruction to someone or something.
In our case, we are giving a directive to the C compiler's preprocessor.


### What types of Directives Are There?
1. Angle brackets `#include <stdio.h>`: indicate to the preprocessor this is a standard library directive.
2. Quotation marks: `#include "my_header.h`: indicates to the preprocessor this is a user defined directive.


### Are directives like regular C code?
No, directives are not part of the C language, sort of. When you you compile your code's final
output actually doesn't have even have the directives you mentioned.



### `#include` directive
`Include` another C file into the current file at the location of the `#include` statement prior to compiling the source code.

```c
#include <stdio.h>  // To add the ability to run the printf command to our program, we add the following `include` directive.
#include <stdlib.h>

// Your program's entry point is a function called main with an integer return type.
int main(void) {
  // print 0 using printf, for "print formatted" // %d is an integer, \n is a newline
  printf("%d\n", 0); // => Prints 0
}
```













### `#define` directive
Define a macro which can be used as a constant throughout the source code.	
```c
#define AGE 50
```