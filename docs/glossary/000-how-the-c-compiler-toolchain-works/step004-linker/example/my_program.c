#include <stdio.h>
#include <stdlib.h>
#include "my_header.h"


int main(void) {
  // The preproccessor will remove comments. Inspect the `my_program_after_preproccessing.i file`
  printf ("Hello World\n");
  printf (MY_MACRO_YO);
  return EXIT_SUCCESS;
}
