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

  struct person *next;
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
      printf("%i:\n", i); // empty slot
    }
    else {
      printf("%i:", i);
      person *tmp = hash_table[i];

      while(tmp != NULL){
        printf("%s - ", tmp->name);
        tmp = tmp->next;
      }
      printf("\n");
    }

  }
  printf("\n--HASH_TABLE_END---\n");
}

bool hash_table_insert(person *p) {
  if(p == NULL) return false;
  int index = hash_fn(p->name);

  p->next = hash_table[index]; // NULL initially
  hash_table[index] = p;
  return true;
}


/**
* Look up someone in our hash_table
*/
person *hash_table_lookup(char *name) {
  int index = hash_fn(name);
  // char value = hash_table[index];

  //look through list if we had collisions
  person *tmp = hash_table[index]; // pointer to head of the list

  //Iterate over our linked list
  while(tmp != NULL && strcmp(tmp->name, name) != 0) {
    tmp = tmp->next;
  }
  return tmp;
}

person *hash_table_delete(char *name) {
  int index = hash_fn(name);

  person *tmp = hash_table[index]; // pointer to head of the list
  person *prev = NULL;

  //Iterate over our linked list
  while(tmp != NULL && strcmp(tmp->name, name) != 0) {
    prev = tmp;
    tmp = tmp->next;
  }
  if(tmp == NULL) return NULL; // we iterate the entire list and couldn't find anything

  if(prev == NULL) {
    //delete the head
    hash_table[index] = tmp->next;
  }
  else {
    prev ->next = tmp->next;
  }
  return tmp;
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

