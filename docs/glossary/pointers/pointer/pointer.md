# Pointers

### What is a pointer?
A pointer is an integer holding a memory address that points to a value, instead of holding the actual value itself.

```c
#include <stdio.h>
int main (int argc, char *argv[]){
  int age = 30;
  int *p;                     // initializing variable `p` which is a pointer, as indicated by `*`. It's just a memory address!
  p = &age;                   


  printf("age=%d\n", age);    // 30
  printf("p=%p\n", p);        // 0x7ffd724e7414 or something that looks like that; recall `p` is just a memory address

  printf("*p=%d\n", *p);      // 30, when we add the `*` before `p` now we are asking for the value inside the memory address that p points to.
  
  
  *p = 40;                    // recall, *p points to the age variable and that using `*` before `p` mean accessing the memory address cell directly.
  printf("*p=%d\n", *p);      // 40
  printf("age=%d\n", age);    // 40
 
  return 0;
}
```
Breaking down what's happening:

#### Step1
We declare an int variable `age` and initialize it to 30. This variable also get's added to the stack segment in memory for our currently running program. Notice we are in the `main` function.

<img src="../../../images/003.jpg">

#### Step 2
We declare a variable `p` whose type is a pointer to an int. The star `*` syntax is how to declare the
type as a pointer to a particular other type. So far, it doesn’t point anywhere… we have only declared that
we want a space in memory to hold a pointer to an int. _Usually you need to declare pointers as pointing to a particular type, but the exception is a so-called void pointer, which is a pointer to an unknown type. Don’t worry about void pointers for now._

<img src="../../../images/002.jpg">


#### Step 3
We assign to `p` the address (the location) of the other variable `age`

<img src="../../../images/001.jpg">

### Step 4
When we do `*p = 40` we are accessing and assigning a value that a pointer points to and this is called `derefenecing.`



<!-- IMAGE -->


### Where are Pointers used?
Pointers are also variables and play a very important role in C programming language. They are used for several reasons, such as:
- Strings
- Dynamic memory allocation
- Sending function arguments by reference
- Building complicated data structures
- Pointing to functions
- Building special data structures (i.e. Tree, Tries, etc...)

The computer's memory is a sequential store of data, and a pointer points to a specific part of the memory.
Our program can use pointers in such a way that the pointers point to a large amount of memory - depending
on how much we decide to read from that point on.

