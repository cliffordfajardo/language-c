#include <stdio.h>
#include "include/minunit.h"
#include "include/ansi-escape-seqs.h"

// Globals setup
int tests_run = 0;
int tests_failed = 0;
int tests_passed = 0;



// Make all tests cases fail
// int foo = 7;
// int bar = 4;

// Make all tests cases pass
int foo = 7;
int bar = 5;



// -------------------SETUP: Function's to test ------------------------------------
static char * test_foo() {
  mu_assert(
    ANSI_RED"ERROR:  foo != 7"ANSI_RESET,
    foo == 7
  );
  return 0;
}

static char * test_bar() {
  mu_assert(
    ANSI_RED"ERROR:  bar != 5"ANSI_RESET,
    bar == 5
  );
  return 0;
}

static char * all_tests() {
  mu_run_test(test_foo);
  mu_run_test(test_bar);
  return 0;
}







int main(int argc, char **argv) {
  char *test_results = all_tests();
  if (test_results != 0) {
    printf("%s\n", test_results);
  }
  else {
    printf(ANSI_GREEN"ALL TESTS PASSED\n"ANSI_RESET);
  }

  printf("Tests passed: %d/%d\n", tests_passed, tests_run);
  printf("Tests run: %d\n", tests_run);

  return test_results != 0;
}