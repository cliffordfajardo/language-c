/**
 * @example: mu_assert("ERROR: foo != 7", foo == 7);
 */
#define mu_assert(message, test) do {\
  if (!(test)) { return message;}\
} while (0)

/**
 * @example: mu_run_test(test_foo);
 */
#define mu_run_test(test) do {\
  char *message = test();\
  tests_run++;\
  if (message) {\
    tests_failed++;\
    return message;\
  } else {\
    tests_passed++;\
  }\
} while (0)

extern int tests_run;
extern int tests_failed;
extern int tests_passed;