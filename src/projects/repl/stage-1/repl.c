#include <stdio.h>
#include <stdbool.h>


#define MAX_STR_LENGTH 10
#define PROMPT_CHAR ">"


int main() {
  char user_input_buffer[MAX_STR_LENGTH];


  while(true) {
    printf(PROMPT_CHAR);
    fgets(user_input_buffer, MAX_STR_LENGTH, stdin);
    printf("string is: %s\n", user_input_buffer);
  }
  return 0;
}
