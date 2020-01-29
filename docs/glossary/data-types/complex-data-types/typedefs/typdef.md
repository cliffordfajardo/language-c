# Typedefs

# What is a typdef?
The `typdef` word in C allows you to define your own name for a data type.

## Example 1
```c
#include <stdio.h>

int main () {
  typedef int Counter;
  Counter = 0;
  return 0;
}
```

## Example 2

```c
#include <stdio.h>
#include <string.h>
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
 
int main( ) {
  Book book;
  strcpy(book.title, "C Programming");
  strcpy(book.author, "Anna King"); 
  strcpy(book.subject, "Compuer Programming");
  book.book_id = 6495407;

  printf( "Book title : %s\n", book.title);
  printf( "Book author : %s\n", book.author);
  printf( "Book subject : %s\n", book.subject);
  printf( "Book book_id : %d\n", book.book_id);

  return 0;
}
```


### Typedefs in the real world
`typedef` isn’t used particularly often in most basic C code, but you may come across it in applications requiring a high degree of portability. New types may be defined for basic variables and typedef may be used in header files to tailor the program to the target machine.
One place you may see typedef used more often is while simplifying the declaration of compound types such as the struct type (which we will see later).


### Resources
- https://www.coursera.org/learn/programming-fundamentals/supplement/Xkk9A/typedef
- https://www.learn-c.org/en/Structures