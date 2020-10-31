# Stage1: Hash Table

In `stage1` we create the world's simplest hashing function. This code simply illustrates that a hashing function
takes in a key and always returns back the same value for the key.

```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* For a given input, it returns back a value. The same input always returns the same value.
* @example
* hash_fn('ana') => 5
* hash_fn('ana') => 5
*/
unsigned int hash_fn(char *name) {
  return 5;
}

int main(){
  printf("Ana => %u\n", hash_fn("Ana")); //5
  printf("Ana => %u\n", hash_fn("Ana")); //5
}
```

In our code actual `stage-1` code we make our hashing function more robust.




### Related
- https://github.com/LambdaSchool/C-Hash-Tables
