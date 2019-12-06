# Preprocessor in C Compiler
https://www.coursera.org/learn/writing-running-fixing-code/supplement/l3c0E/preprocessing
## What is preprocessor?
A preprocessor is a program that takes my C files, 
combines it with any header files (AKA any include directives),
as well expands any macros I've used. The result you get after
the preprocessor is a c program, without the preproccessor directives.

```
my_program.c   my_header.h
           \  /
             |
      C preproccessor  
             |
    Intermediate file (still C code!)
```


### Why is it called preprocessor?
It's a program that preprocesses some code, before its passed as input to another program.
By breaking down the word, we can strongly infer this is not the end of a compiler process!



### How do I only run the preprocessor program on my file, instead of running the whole toolchain.
<!-- 
      Reminder of stages: ****preprocessor**** -> X -> Compiler -> X -> Assembler -> X -> Linker -> Binary Executable
 -->

If your on mac, read your C compilers man pages. So: `man clang` indicates we need to pass a `-E` flag like so:

```c
# the `.i` file extension is used to indicate this is an intermediary file outputted by the preprocessor.
clang -E my_program.c -o my_program_after_preproccessing-stage.i
```


###  How do I run the entire compile tool chain so I get my binary executable file from my C code?
<!-- NOTE: This is done on a mac using the built in clang compiler -->

Compile my c program to a binary executable!
```c
cc my_program.c -o my_program.out
```

Run my program1

```c
./my_program.out
```

### Why might I just want to run only the preprocessor?


### Whats the dumbest possible way to implement this (try pseudocode or blabber)? Embrace the not knowing - w00t!
When you encounter a header file in your program, remove and replace the include directive with the actual source code of the program.

### Why is it done this way?
Like many things in programming, nothing is stopping you from putting this logic inside a bigger program,
but the separation of concerns makes it easier to reason and work with the code. As a programmer, I can  decide
that instead of running my code through all the compiler tool chain programs (pre-processor, compiler, assembler, linker)
I could just run the preproccessor on my code so that I could inspect my programs more easily.


### What tradeoffs were the designers considering?
Modularity, separations of concerns, sanity and code readability!

