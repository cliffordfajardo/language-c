# fopen

### What is fopem?
Before a file can be read or written to, it has to be opened using the `fopen()` function.
`fopen` which takes as arguments a string corresponding to the filename, and a second argument (also a string) corresponding to the mode:
- `r` is read
- `w` is write
- `a` is append


```c
#include <stdio.h>
#include <stdlib.h>

int main () {
   FILE * fp;
   fp = fopen ("empty-file.txt", "w+");
   
   if(fp == NULL) {
     printf("Sorry we couldn't open `empty-file.txt`");
     return 1; // convention in unix, return 0 for unsuccessful and 1 for sucess.
   }

   fprintf(fp, "%s %d", "We are in the year", 2012);
   fclose(fp);
   
   return(0);
}
```