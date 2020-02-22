//#include <string.h>  is C convention to declare this in the global entry? I imagine that to be the case so there is no collision

/*
  @param user_input is a string. Here we are passing a pointer.
  Takes in a string directly from the stdin fires off specific
  logic depending on the supported command names.
  @example parser("db_get name")
*/
void parser(char* user_input){
  //------------------- Remove \n char at end of user input
  int len = strlen(user_input);
  if(user_input != NULL && user_input[len - 1] == '\n') {
    user_input[len - 1] = '\0';
  }
  else {
    printf("Encountered error trying to sanitize user_input string.");
  }



  //-------------------Command Parsing
  if(strcmp("db_get", user_input) == 0) {
    printf("[LOGGER] - db_get was typed in\n");
  }
  else if(strcmp("db_set", user_input) == 0){
    printf("[LOGGER] - db_set was typed in\n");
  }
  else {
    printf("[LOGGER] - unsupported command:%s\n", user_input);
  }
};
