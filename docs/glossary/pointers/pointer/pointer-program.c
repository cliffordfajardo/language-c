#include <stdio.h>
int main (){
  int age = 30;
  int *p;                     // initializing variable `p` which is a pointer, as indicated by `*`. It's just a memory address!
  p = &age;                   // assigning a value to our pointer, which is the memory address of `age`


  printf("age=%d\n", age);    // 30
  printf("p=%p\n", p);        // 0x7ffd724e7414 or something that looks like that; recall `p` is just a memory address

  printf("*p=%d\n", *p);      // 30, when we add the `*` before `p` now we are asking for the value inside the memory address that p points to.
  
  
  *p = 40;                    // POINTER DEREFERENCING: Getting the value stored in a memory location and manipulating it.
  printf("*p=%d\n", *p);      // 40
  printf("age=%d\n", age);    // 40
 
  return 0;
}