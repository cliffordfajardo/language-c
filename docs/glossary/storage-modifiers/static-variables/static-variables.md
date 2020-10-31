# Static 
With the `static` keyword, we can preserve the value of a variable even after it is out of scope.
Static variables preserve their previous value in their previous scope and are not initialized again in the new scope.

### Example 1: Static Local Variables

```c
#include<stdio.h> 
int my_function()  { 
  static int count = 0; // this variable will not be reinitialized from scratch when we call the function multiple times.
  count++; 
  return count; 
} 
   
int main()  { 
  printf("%d ", my_function()); 
  printf("%d ", my_function()); 
  
  // printf("%d ", count); WONT WORK
  return 0; 
}
```

Non-static variable behavior:

```c
#include<stdio.h> 
int my_function()  { 
  int count = 0; 
  count++; 
  return count; 
} 
   
int main()  { 
  printf("%d ", my_function());   //1
  printf("%d ", my_function());   //1
  return 0; 
}
```


### Example 2: Static Global Variables
Static global variables are global variables visible only to the file in which it is declared.

```c
#include<stdio.h>
static int counter = 0; // visible only to the file in which it is declared.

int my_func()  { 
  counter++;
  return counter; 
} 
   
int main()  { 
  printf("%d ", my_func());  //1
  printf("%d ", my_func());  //2
  counter++;
  printf("%d ", counter);    //3
  return 0; 
}
```

### Related
https://www.youtube.com/watch?v=3E-r4GfvWOI
