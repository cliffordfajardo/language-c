# Char

### What is char data type?
In C, the `char` keyword instructs our compiler to interpret a value as an individual character.

```c
#include <stdio.h> 
#include <stdlib.h>

int main(){
  char my_char = 'A';
  printf("ch = %c\n",my_char);
  return 0;
}
```

### Different ways to create `char` variables

1. Character literal notion (using the literal character)
  - This is the preffered method, as writing down the literal character gives us the numerical value without having to know it.


2. Using an integer
  - This works because `char` under the hood is just an integer ([see how ascii works]()), However this method of declaration is not recommended since your code may not
    be portable when you run your code on a different machine. See [portability](), if you're unfamiliar with the term.

```c
#include <stdio.h> 
#include <stdlib.h>

int main(){
  char my_first_char = 'A';       # 1. Character Literal Notation (do this)
  char my_second_char = 65;      # 2. Integer Notation (don't do this!)

  printf("my_first_char = %c\n", my_first_char);
  printf("my_second_char = %c\n",  my_second_char

  return 0;
}
```

### References
- https://www.coursera.org/learn/programming-fundamentals/supplement/Xmf4T/char