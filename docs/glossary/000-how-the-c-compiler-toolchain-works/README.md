# How the Compiler Toolchain Works

This folder demonstrates the different stages of how the `clang`  (the c/c++/obj) compiler works.
Other compilers like `gcc` work in a similar way. There are differences in the infrastructure
behind the scenes but the points I'll demonstrate carry over to either.



# Introduction
You use your C compiler (ex: clang, gcc etc...) to compile your C program to machine executable code (binary..01010), but did you know there
are multiple steps that occur in between taking your c program file and the converting it to machine executable binary?

Before the binary executable is created from our c source code file, our c code gets fed as input to various programs
in the c compiler tool chain, but this often not clear for many people as they are just use to running the c compiler
and getting the binary executable file at the end.

To better put the words into context, I have created inside this folder several example folders showing you how our c code gets transformed
for each step in the compiler process.

When you run compile your c program these are the following programs its fed to in successive order:
1. [Preprocessor](./step001-preprocessor/preprocessor.txt)
2. [Compiler](./step002-compiler/compiler.txt)
3. [Assembler](./step003-assembler/assembler.txt)
4. [Linker](./step004-linker/linker.txt)

# Resource
Readings
- [GCC vs. Clang/LLVM: An In-Depth Comparison of C/C++ Compilers](https://medium.com/@alitech_2017/gcc-vs-clang-llvm-an-in-depth-comparison-of-c-c-compilers-899ede2be378)
- https://www.coursera.org/learn/writing-running-fixing-code/supplement/AWnUk/compilation-process

