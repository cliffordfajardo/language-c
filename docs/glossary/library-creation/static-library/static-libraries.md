# Static Library

## What is a static library?
When a C program is compiled, the compiler generates object code. After generating the object code, the compiler also invokes linker. One of the main tasks for linker is to make code of library functions (eg `printf()`, `scanf()`, `sqrt()`, ..etc) available to your program. 

A linker can accomplish this task in 2 ways:
1. By copying the code of library function to your object code directly OR
2. By making some arrangements so that the complete code of library functions is not copied, but made available at run-time.

### Example

1. Create a C file that contains functions in your library.

```c
#include <stdio.h> 
void hello_world(void) { 
  printf("hello_world() called!"); 
} 
```

2. Create a header file for the library

```c
void hello_world(void); 
```

3. Compile library files.
NOTE: we need to pass the `-c` flag, if we don't we'll get an error saying there's no entry point for `main`.
<!-- TODO why? -->
```
gcc -c my_lib.c -o my_lib.o
```

Now we have a file called `my_lib.o` in our directory. We can't simply run it (try `./my_lib.o`) because
it doesn't have an entry point (`main()`).

4. Create static library. This step is to bundle multiple object files in one static library (see `ar` command for details). The output of this step is static library. We'll use the `ar` command with the `r`, `c` and `s` flags. 
The file that this command will create will be called `my_lib.0`.

<!-- TODO create a folder for `ar` command -->

```
ar rcs my_lib.a my_lib.o
```

5. Now our static library called `my_lib` is ready to use. At this point we could just copy `my_lib.a` somewhere else to use it. For demo purposes, let us keep the library in the current directory.


Let's create a new program that ises the static library we created.
1. Create a C file called `my_app.c` that will be the entry point of our program.

```c
#include "my_lib.h" 
void main()  { 
  hello_world(); 
} 
```

2. Compile the `my_app.c` program:
<!-- Why are we using the -c flag -->

```c
gcc -c my_app.c -o my_app.o
```

3. Link the compiled `my_app.out` program to the static library. Note that `-L` is used to tell that the static library is in current folder (See this for details of -L and -l options).

```
gcc my_app.c my_lib.a -o my_app
```

<!-- It's also pretty standard to prefix with `lib_`? -->






Static Linking and Static Libraries is the result of the linker making copy of all used library functions to the executable file

## Pros of Static Library
- Everything is bundled into your application, so you don’t have to worry that the client will have the right library (and version) available on their system.

## Cons of Static Library
- creates larger binary files, and need more space on disk and main memory
- for any update in the static libraries, you have to recompile the main program every time.

### References
- Really useful posts on the creation process on CLI (not usin `lib` prefix)
  https://renenyffenegger.ch/notes/development/languages/C-C-plus-plus/GCC/create-libraries/index
  https://stackoverflow.com/questions/32341316/link-a-static-library-in-gcc-without-having-to-specify-the-lib-prefix
  
- https://scienceprog.com/embedded-c-program-libraries-and-linking/
- https://www.xuebuyuan.com/221116.htmli
- https://medium.com/@StueyGK/what-is-c-static-library-fb895b911db1