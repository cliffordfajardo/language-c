#include <stdio.h>
#include <stdbool.h>
#include <string.h>


#define MAX_STR_LENGTH 10
#define PROMPT_CHAR ">"


int main() {
  char user_input_buf[MAX_STR_LENGTH];


  while(true) {
    printf(PROMPT_CHAR);
    fgets(user_input_buf, MAX_STR_LENGTH, stdin);

    if(strcmp("db_get", user_input_buf)) {
      printf("[LOGGER] - db_get was typed in\n");
    }
    else if(strcmp("db_set", user_input_buf)){
      printf("[LOGGER] - db_set was typed in\n");
    }
  }
  return 0;
}
