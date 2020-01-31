# Pragma
<!-- SEE REF at end of the page -->

This preprocessor directive is used to access compiler-specific extensions.

### Pragma Once
A common use of #pragma is the #pragma once directive, which asks the compiler to include a header file only a single time, no matter how many times it has been imported.

In this example, using `#pragma once` is equivalent to an include guard (Ex: ifndef) that prevents the file from being processed multiple times.

```
#pragma once
// header file code
```

Pragma once is available on many major compilers, including Clang, GCC, the Intel C++ compiler and MSVC.

### Pragma Warning
The `#pragma` directive can also be used for other compiler-specific purposes. `#pragma` is commonly used to suppress warnings. For example, in MSVC

```
#pragma warning (disable : 4018 )
```


### References
- https://www.cprogramming.com/reference/preprocessor/pragma.html