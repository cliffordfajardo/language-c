# Compiler in the C Compiler Toolchain / Process

### What is compiler?
A program that translates your code from one language to another.
In the case of this C compiler it will create assembly code.

### Why is it called compiler?
https://www.coursera.org/learn/writing-running-fixing-code/supplement/uaXy3/the-actual-compiler


### Instead running the whole toolchain and compiling to machine code, how do I only run up to the compiler?
<!-- IMAGE OF WHERE WE ARE IN THE TOOLCHAIN

      preprocessor -> X -> ******Compiler******* -> X -> Assembler -> X -> Linker -> Binary Executable
-->

If your on mac, read your C compilers man pages. So: `man clang` indicates we need to pass a `-E` flag like so:

```c
# the `.s` file extension is used to indicate this is an assembly file. `-o` flag was used to name the ouput file but
# you can omit the -o flag which will result in the file being named after the programming ending in `.s` file extension.

clang -S my_program.c -o my_program_after_compiler-stage.s
```