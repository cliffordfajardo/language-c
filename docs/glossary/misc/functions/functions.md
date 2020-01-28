### Function



## Example 0: Function declaration and implementation
Functions must be first defined before they are used in the code.

```c
#include <stdio.h>
// Function definition and implementation (AKA body)
void write_message(void) {
  printf("Hello, Ana\n");
}

int main() {
  write_message();
  return 0;
}
```

## Example 1: Function declaration and later the implementation
Another method that's more common then the first method above, is declaring your function first in a header file or beginning of a C file then later
implementing it.

```c
#include <stdio.h>
void write_message(void) {
  printf("Hello, Ana\n");
}

int main() {
  write_message();
  return 0;
}
```





## Function Scope
- Any variables declared inside a function, are local to that function, and are not accessible outside of the function.
- Code within a function doesn’t have access to variables that have been declared outside of that function
  (for example in another function, or in `main()`). If you want this functionality, then you can specify that a variable be global.
- Any variable declared outside of any function (it also has to be outside of `main()`) is global, and can be seen by every function.
   In C, global variables are known as external variables (they are external to any function).


### Example 3: global vs local variables
```c
#include <stdio.h>
float my_global_var = 3.14;


void my_function(void) {
    int my_int= 8;
    printf("my favourite number is %d\n", my_int);
    printf("my favourite float is %.2f\n", my_global_var);
    
    // printf("my favourite letter is $c\n", my_char); // THIS WOULD NOT WORK
}

int main() {
    char my_char = 'x';
    printf("my favourite letter is %c\n", my_char);
    
    my_function();
    
    printf("my favourite float is %.2f\n", my_global_var);
    
    // printf("my favourite number is %d", my_int; // THIS WOULD NOT WORK
    return 0;
}
```

or being more explicit and using the `extern` keyword (though variables and function outside of main are already global)



```c
#include <stdio.h>
extern int  = 32; // explicit, which is nice, but not necessary here.
int b = 8;        // non-explicit

int main() {
   auto int a = 28;
   extern int b;
   printf("The value of auto variable : %d\n", a);
   printf("The value of extern variables x and b : %d,%d\n",x,b);
   x = 15;
   printf("The value of modified extern variable x : %d\n",x);
   return 0;
}
```


### Example 4: variable number of function arguments
Sometimes, you may come across a situation, when you want to have a function, which cani
take variable number of arguments, i.e., parameters, instead of predefined number of parameters.

To use such functionality, you need to make use of `stdarg.h` header file which provides the functions
and macros to implement the functionality of variable arguments and follow the given steps:
1.Define a function with its last parameter as ellipses and the one just before the ellipses is always an int which will represent the number of arguments.
2.Create a va_list type variable in the function definition. This type is defined in stdarg.h header file.
3.Use int parameter and va_start macro to initialize the va_list variable to an argument list. The macro va_start is defined in stdarg.h header file.
4. Use va_arg macro and va_list variable to access each item in argument list
5.Use a macro va_end to clean up the memory assigned to va_list variable.

```c
#include <stdarg.h>
#include <stdio.h>  // in order to use the handful of functions necessary to work with the argument list.

double average(int num,...) {
  va_list valist;
  double sum = 0.0;

  va_start(valist, num); /* initialize valist for num number of arguments */

   
  for (int i = 0; i < num; i++) {
    sum += va_arg(valist, int); /* access all the arguments assigned to valist */
  }
	
  /* clean memory reserved for valist */
  va_end(valist);

  return sum/num;
}

int main() {
  printf("Average of 2, 3, 4, 5 = %f\n", average(4,  2,3,4,5));
  printf("Average of 5, 10, 15 = %f\n",  average(3,  5,10,15));
}
```


### Why is it called a function?
https://www.coursera.org/learn/programming-fundamentals/supplement/16ZXn/anatomy-of-a-function