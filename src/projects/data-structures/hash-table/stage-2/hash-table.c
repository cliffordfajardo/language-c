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

// Using pointers to create our hash_table, which is an array of person pointer structs.
person * hash_table[TABLE_SIZE];


/**
* For a given input, it returns back a value. The same input always returns the same value.
* @example
* hash_fn('ana') => some_number
* hash_fn('ana') => some_number
*/
unsigned int hash_fn(char *name) {
  int str_len = strnlen(name, MAX_NAME_SIZE);
  unsigned int hash_value = 0;

  //Making the hash value random but consistent.The technique is irrelavant, but we do always want deterministic results.
  for(int i=0; i < str_len; i++) {
    hash_value += name[i];                              //the string's value is the ascii value
    hash_value = hash_value * name[i];
    hash_value = (hash_value * name[i]) % TABLE_SIZE;  // we use the modulus operator to ensure our numbers value is between 0 & the TABLE_SIZE-1
  }

  return hash_value;
}


void init_hash_table(){
  for(int i=0; i < TABLE_SIZE; i++) {
    hash_table[i] = NULL;
  }
  // table starts off empoty
};

void print_hash_table(){
  printf("--HASH_TABLE_START---\n");
  for(int i=0; i < TABLE_SIZE; i++){
    if(hash_table[i] == NULL){
      printf("%i:\n", i);
    }
    else {
      printf("%i: %s\n", i, hash_table[i]->name);
    }
  }
  printf("--HASH_TABLE_END---\n");
}

bool hash_table_insert(person *p) {
  if(p == NULL) return false;

  int index = hash_fn(p->name);
  if(hash_table[index] != NULL) return false;

  hash_table[index] = p;
  return true;
}


/**
* Look up someone in our hash_table
*/
person *hash_table_lookup(char *name) {
  int index = hash_fn(name);
  // char value = hash_table[index];
  if(hash_table[index] != NULL && strcmp(hash_table[index]->name, name) == 0) {
    return hash_table[index];
  }
  else {
    return NULL;
  }
}

person *hash_table_delete(char *name) {
  int index = hash_fn(name);
  // char value = hash_table[index];
  if(hash_table[index] != NULL && strcmp(hash_table[index]->name, name) == 0) {
    person *tmp = hash_table[index];
    hash_table[index] = NULL;
    return tmp;
  }
  else {
    return NULL;
  }
}


int main(){
  init_hash_table();

  person Ana = {.name="Ana", .age=10};
  person Bob = {.name="Bob", .age=11};
  person Cal = {.name="Cal", .age=12};
  person Dan = {.name="Dan", .age=13};
  person Eve = {.name="Eve", .age=14};
  person Fez = {.name="Fez", .age=15};
  person Gey = {.name="Gey", .age=16};
  person Han = {.name="Han", .age=17};
  person Ian = {.name="Ian", .age=18};
  person Jan = {.name="Jan", .age=19};
  person Kal = {.name="Kal", .age=20};


  hash_table_insert(&Ana); // why doesnt 'ana' just work? By passing 'ana` we're passing a struct. Instead we want to pass a pointer.
  hash_table_insert(&Bob);
  hash_table_insert(&Cal);
  hash_table_insert(&Dan);
  hash_table_insert(&Eve);
  hash_table_insert(&Fez);
  hash_table_insert(&Gey);
  hash_table_insert(&Han);
  hash_table_insert(&Ian);
  hash_table_insert(&Jan);
  hash_table_insert(&Kal);

  print_hash_table();

  printf("Ana => %u\n", hash_fn("Ana"));
  printf("Bob => %u\n", hash_fn("Bob"));
  printf("Cal => %u\n", hash_fn("Cal"));
  printf("Dan => %u\n", hash_fn("Dan"));
  printf("Eve => %u\n", hash_fn("Eve"));
  printf("Fez => %u\n", hash_fn("Fez"));
  printf("Gey => %u\n", hash_fn("Gey"));
  printf("Han => %u\n", hash_fn("Han"));
  printf("Gey => %u\n", hash_fn("Gey"));
  printf("Ian => %u\n", hash_fn("Ian"));
  printf("Jan => %u\n", hash_fn("Jan"));
  printf("Kal => %u\n", hash_fn("Kal"));



  // person *tmp1 = hash_table_lookup("Bob");
  // if(tmp1 == NULL) {
  //   printf("Not found!\n");
  // } else {
  //   printf("Found value %s\n", tmp1->name);
  // }

  // person *tmp2 = hash_table_lookup("Janet");
  // if(tmp2 == NULL) {
  //   printf("Not found!\n");
  // } else {
  //   printf("Found value %s\n", tmp2->name);
  // }

  // hash_table_delete("Bob");
  print_hash_table();
}

