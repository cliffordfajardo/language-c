# Your first C program: HelloWorld.c !


Inside of the `program1` is a file called `program1.c`. It contains a simple C program.
Take a look at the file `program1.c` for a few minutes then come back here where we will
explain what's happening.

At the top of the file you'll see some `#include` statements. In nearly all program languages,
you'll need to import code at the beginning of your program to access features of the programming language.

```c
#include <stdio.h> 
#include <stdlib.h>
```

Below the include statements is where we'll start to see the main parts of a computer program.
Below you'll see a `main` function, which is where most of our programs instructions and logic lives.
`main` is the entry point of our computer program


```c
int main(void) {
  printf("%d\n", 0); // => Prints 0 to our output.
}
```

The `int` keyword indicates that this function will return to an integer - a non-decimal whole number.
<!-- TODO INSERT IMAGE OF THE ANATOMY OF A PROGRAM of a declaration-->



### Running the program
Assuming you are in the `program1` directory, we are going to the following command, which will generate a file called `a.out`

```
cc hello-world.c
```
We just used the [compiler]() on our computer to [compile]() our program into a
[binary executable]() file.



OR ...create Named out file; notice the use of the `-o` flag

```
cc hello-world.c -o hello-world.out
```

## Run the binary executable
You can run the following command in the terminal to run the file `./a.out`.


If at any point you ever get stuck, check the man page for the compiler with this command(s)
which are eqivalent ways to seeing the manual pages for the clang compiler.

```
man cc
# OR
man clang
```

