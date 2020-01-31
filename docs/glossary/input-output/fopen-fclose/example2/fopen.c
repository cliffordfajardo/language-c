#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
   FILE * file_to_read = fopen("my-file.txt", "r");
   FILE * file_to_write = fopen("my-new-text.txt", "w");


   if(file_to_read == NULL){
      printf("Error we couldn't open my-file.txt.");
      return 1; // convention in unix, return 0 for unsuccessful and 1 for sucess.
   }

   if(file_to_write == NULL){
      printf("Error we couldn't open my-file.txt.");
      return 1; // convention in unix, return 0 for unsuccessful and 1 for sucess.
   }
    

    int return_code;
    int c;
    while ( (c = fgetc(file_to_read)) != EOF) {
      if (c == '.') {
        c = '!';
      }
      fputc(c, file_to_write);
    }
   
   fclose(file_to_read);
   fclose(file_to_write);
   return 0;
}