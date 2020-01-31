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