# Strings

## What are Strings?
In C, strings are represented as an array of individual characters. That sounds complicated, but this example will show what I mean.

## Different Ways to create strings

### Pointer Notation
**This method creates a string which we can only use for reading**. If we wish to define a string which can be manipulated, we will need to define it as a local character array:

```c
#include <stdio.h> 
#include <stdlib.h>
int main(){
  char * name = "Ana";
  printf("%s is a software engineer.\n", name);
}
```

### Empty Brackets Notation
This notation is different because it allocates an array variable so we can manipulate it. The empty brackets notation [] tells the compiler to calculate the size of the array automatically.

```c
#include <stdio.h> 
#include <stdlib.h>
int main(){
  char name[] = "Ana";
  printf("%s is a software engineer.\n", name);
}
```

This is in fact the same as allocating it explicitly, adding one to the length of the string:

```c
#include <stdio.h> 
#include <stdlib.h>
int main(){
  char name[4] = "Ana";    // same as "char name[] = "Ana""
  printf("%s is a software engineer.\n", name);
}
```

The reason that we need to add one, although the string John Smith is exactly 10 characters long, is for the string termination: a special character (equal to 0) which indicates the end of the string. The end of the string is marked because the program does not know the length of the string - only the compiler knows it according to the code.



### Accessing Individual Characters from a String

```c
int main(){
  char name[4] = "Ana";    // same as "char name[] = "Ana""
  
  char char_A = name[0];
  char char_N = name[1];
  char char_a = name[2];
  char char_end_of_string = name[3]; 

  printf("%s\n", char_A);
  printf("%s\n", char_N);
  printf("%s\n", char_a);
  printf("%s\n", char_end_of_string_char);
}
```






## Resources
- https://www.coursera.org/learn/pointers-arrays-recursion/supplement/QuCc7/string-literals
### Interesting History on Strings in C
- https://softwareengineering.stackexchange.com/questions/294748/why-are-c-string-literals-read-only/294750