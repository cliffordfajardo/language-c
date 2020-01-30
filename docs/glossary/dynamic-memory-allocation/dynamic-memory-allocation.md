# Dynamic Memory Allocation

In languages like Javascript, Python, Python and other dynamical languages you are allowed work with data structures
like arrays, lists, etc, that you can dynamically resize. 

That is to say, you can make them longer, shorter, etc, even after they are created like so:
```js
let array = [];

array.push(1,2);
console.log(array.length) //2

array.pop();
console.log(array.length) //1
```

In C this convenience doesn't come automatically. Once you have allocated a variable such as an array on the stack,
it is fixed in its size. You cannot make it longer or shorter, however, if you use `malloc()` or `calloc()` to allocate
an array on the heap, you can use `realloc()` to resize it at some later time. 

In order to use these functions you will need to #include <stdlib.h> at the top of your C file.

### Heap variables Lifecycle
The built-in functions `malloc()`, `calloc()`, `realloc(), `memcpy()` and `free() are what you will use to manually manage dynamically allocated data structures on the heap. 
The life cycle of a heap variable involves three stages:

- allocating the heap variable using malloc() or calloc()
- (optionally) resizing the heap variable using realloc()
- releasing the memory from the heap using free()


