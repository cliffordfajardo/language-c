# Register

### What is the `reigster` keyword?
The register storage class allows you to store local variables within
functions or blocks in CPU registers instead of RAM to have quick access to these variables.

### Example

```c
#include <stdio.h> 
// register int x = 10;  Error (global scope) 
int main()  { 
  register int i = 10;  // Register can only be used within a block (local),

  printf("%d\n", i); 
  return 0; 
} 
```


### Example 2: No pointers or memory addresses for CPU Registers

```c
#include <stdio.h> /* function declaration */
main() { 
 register int weight;
 int *ptr=&weight;
 /*it produces an error when the compilation occurs ,we cannot get a memory location when dealing with CPU register*/}
}
```