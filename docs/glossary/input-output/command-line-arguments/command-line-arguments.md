# Command Line Arguments

## What are Command Line Arugments?
Command-line arguments are commands passed to our program from the terminal. These arguments can then be used in your code.


### Example 1: One command line argument
Let's break down what's happening:

When our program is executed, the first argument to `main()`, `argc`, will contain the number of command-line
arguments passed to program, plus one. The first argument to our program is always the name of your binary executable: 

So if we run the following command `./command-line-program1.out` in our terminal on the following C program:

```c
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("argc = %d\n", argc);               //argc = 1, Regardless of any program, the first argument of program is always the name of our binary executable
  for (int i=0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);   //argv[0] = ./command-line-program1.out
  }
  return 0;
}
```

### Example 2: Two command line argument
If we ran our binary executable in the terminal with the following: `./command-line-program1.out my_2nd_arg`
```c
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("argc = %d\n", argc);               //argc = 2
  for (int i=0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);   //argv[0] = ./command-line-program1.out
                                             //argv[1] = my_2nd_arg
  }
  return 0;
}
```

### Example 3: Two command line argument
If we ran our binary executable in the terminal with the following: `./command-line-program1.out my_2nd_arg my_3rd arg`
```c
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("argc = %d\n", argc);               //argc = 3
  for (int i=0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);   //argv[0] = ./command-line-program1.out
                                             //argv[1] = my_2nd_arg
                                             //argv[2] = my_3rd_arg
  }
  return 0;
}
```


### Example 3: Passing numbers 
All inputs are treated as null-terminated strings, so if you want to pass integers
or floating point values in, you will have to convert them from strings in your code.

Example: `./command-line-program2.out 1 3`

```c
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("argc = %d\n", argc);    //argc = 3

  return arg[1] + arg[2];
  return 0;
}
```
