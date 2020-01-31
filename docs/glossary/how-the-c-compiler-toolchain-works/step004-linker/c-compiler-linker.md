# Linker

### What is the Linker
The linker takes an object file (binary code not linked), which is machine code that has references to functions or symbols that have
not been resolve yet.


We're going to run all the stages

<!-- Reminder of stages: preprocessor -> X -> Compiler -> X -> Assembler -> X -> Linker -> Binary Executable -->


If your on mac, read your C compilers man pages.

```c
# the `.out` file extension is used to indicate this is now a binary executable.
clang -c my_program.c 
```


# Related
- see `library-creation/static-library`
https://www.coursera.org/learn/writing-running-fixing-code/supplement/zy2it/linking