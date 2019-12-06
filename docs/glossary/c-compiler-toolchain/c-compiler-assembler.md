# Assembler in the C compiler

## What is an Assembler?
An assembler is a program that takes assembly language and then translate it into machine code.
In the context of the c compiler, the assembler does convert our code to binary, but it hasn't been `linked` it yet. Meaning references to functions, symbols, etc aren't defined yet.

## Instead running the whole toolchain and compiling to machine code, how do I only run up to the assemmbler?
<!-- Reminder of stages: preprocessor -> X -> Compiler -> X -> Assembler -> X -> Linker -> Binary Executable -->
If your on mac, read your C compilers man pages. So: `man clang` indicates we need to pass a `-E` flag like so:

```c
# the `.o` file extension is used to indicate this is an object file. `-o` flag was used to name the ouput file but
# you can omit the -o flag which will result in the file being named after the programming ending in `.o` file extension.
# now that the file is in machine code, we can't simply read it in our text editor as we did before. Assembly was still
# text., but this is not

clang -c my_program.c -o my_program_after_the_assembler.o
```


### When do you actually do assembly programming & what are the pre-requisites?
When you need VERY fined grained control over CPU operations (pretty rare for most people)
Prerequisites: 
- requires learning your particular computer's instruction set, since there is a strong  correspondance between the assembly and the architectures machine code instruction.s


### Why is it called an Assembler? (break down the each word in the term)? ...historical reasoning behind the name?
The name isn't to important, who invented it could have called it a compiler maybe, but the assembler basically
assembles the basic computer instructions into patterns of bits that the computer processor can use.



### Footnotes
CLI Tools
size: `size my_program_after_the_assembler`: https://stackoverflow.com/questions/7718299/whats-an-object-file-in-c




https://www.coursera.org/learn/writing-running-fixing-code/supplement/uaXy3/the-actual-compiler


https://www.coursera.org/learn/writing-running-fixing-code/supplement/mbFyO/assembling