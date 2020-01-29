# Testing


There are few different ways to test C code. I'll go through a few methods.

### 1.Testing Using `asserts`
Using the C standard's `<assert.h>` is perhaps the most straight forward way to test code, as it doesn't
require downloading packages from the internet.

```c
#include <stdio.h> 
#include <assert.h> 
  
int main() { 
  int x = 7;   
  // Some big code in between and let's say x is accidentally changed to 9
  x = 9; 
  // Programmer assumes x to be 7 in rest of the code 
  assert(x==7); 
  return 0; 
} 
```


### 2. Custom Minimal Testing Library using C standard library
Look  at the folder `testing-with-minunit`. Please also read: [MinUnit - a minimal testing framekwork for C in 4 lines of code](http://www.jera.com/techinfo/jtns/jtn002.html)


### Related
- [SQLite codebase uses assert alot](https://www.sqlite.org/assert.html)
- [MinUnit - a minimal testing framekwork for C in 4 lines of code](http://www.jera.com/techinfo/jtns/jtn002.html). Thanks [JasonBenn](https://github.com/JasonBenn/dbms)
- https://www.coursera.org/learn/writing-running-fixing-code/home/week/3