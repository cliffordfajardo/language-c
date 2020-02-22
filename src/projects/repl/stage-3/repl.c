#include <stdio.h>
#include <stdbool.h>
#include "./includes/parser.h"
#include <string.h>           // order matters! This cannot be after
#include "./parser.c"

#define MAX_STR_LENGTH 10
#define PROMPT_CHAR ">"

int main() {
  char user_input_buf[MAX_STR_LENGTH];

  while(true) {
    printf(PROMPT_CHAR);
    fgets(user_input_buf, MAX_STR_LENGTH, stdin);
    parser(user_input_buf);
  }

  return 0;
}
