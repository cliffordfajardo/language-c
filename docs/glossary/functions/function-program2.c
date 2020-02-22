#include <stdio.h>

// This function takes a string (recall a string is a character array)
void write_message(char name[]) {
   printf("Hello, %s\n", name);
}

int main() {
  write_message((char *) "Dave");
  write_message((char *) "Victoria");
  return 0;
}
