#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

# define MAX_NAME_SIZE 256 //bytes
# define TABLE_SIZE 10


typedef struct {
  char name[MAX_NAME_SIZE];
  int age;
} person;



/**
* @param name - a string
*/
unsigned int hash_fn(char *name) {
  int str_len = strnlen(name, MAX_NAME_SIZE);
  return 5;
}

int main(){
  printf("Ana => %u\n", hash_fn("Ana"));
  printf("Bob => %u\n", hash_fn("Bob"));
  printf("Cal => %u\n", hash_fn("Cal"));

}

