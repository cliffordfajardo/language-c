# Pointers to Function
One of the handy things you can do in C, is to use a pointer to point to a function. This is particularly useful for passing function's around to other functions, passing big data structures into functions (so we don't need to make a copy IF we don't want to.)

```c
#include <stdio.h>

int add( int a, int b ) {
  return a + b;
}

int subtract( int a, int b ) {
  return a - b;
}

int multiply( int a, int b ) {
  return a * b;
}

void doMath( int (*fn)(int a, int b), int a, int b ) {
  int result = fn(a, b);
  printf("result = %d\n", result);
}

int main(void) {
  int a = 2;
  int b = 3;

  doMath(add, a, b);
  doMath(subtract, a, b);
  doMath(multiply, a, b);

  return 0;
}
```

<img src="./images/01.png">
We are inside `main()` and the variables `a` and `b` get created and thereby added to the stack for the current function context.

<img src="./images/02.png">

We call `doMath` and pass the `add` function.
<img src="./images/03.png">
<img src="./images/04.png">

When we step into `doMath`, whatever function we passed, we grab a reference to it's memory address, in this case on line 16, we now are calling `add(a,b)`.

```
int(*fn) (int a, int b)
```
means we want a pointer to a specific kind of function, one that returns an int and takes in two ints as arguments.

<img src="./images/05.png">
We call the next `doMath` call with `subtract`.
<img src="./images/06.png">
<img src="./images/07.png">
<img src="./images/08.png">
<img src="./images/09.png">

<img src="./images/010.png">
We call the next `doMath` call with `multiply` 

<img src="./images/011.png">

<img src="./images/012.png">

<img src="./images/013.png">

<img src="./images/014.png">

<img src="./images/015.png">

<img src="./images/016.png">
