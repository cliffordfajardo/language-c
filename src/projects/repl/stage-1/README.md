# Stage 1


This program reads a line from std_input

The worlds simplest REPL:

```
#include <stdio.h>
#include <stdbool.h>

#define MAX_STR_LENGTH 10
#define PROMPT_CHAR ">"


int main() {
  char buf[MAX_STR_LENGTH];


  while(true) {
    printf(PROMPT_CHAR);
    fgets(buf, MAX_STR_LENGTH, stdin);
    printf("string is: %s\n", buf);
  }
  return 0;
}

```
