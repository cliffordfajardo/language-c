# Using variables in make files.

So far, we've hard coded our values inside our make files, but in many real world projects
you'll see use of variables.

### Defining a variable

1. Using the `=` operator. To later use that variable, we wrap it in `${}` or `$()`

```
CC = gcc

hello:
  ${CC} hello.c -o hello
```

2. Using `:=` which is known as the _simply expanded variable_. When a simply expanded variable is referenced, its value is substituted directly. You should use this version nearly all the time. The lesson here is that it can avoid future problems entirely if you accidentally reference a variable to itself.

```
// WONT WORK, infinite loop!
# CC = gcc
# CC = ${CC}

// WORKS, because the value is replaced directly when `make` scans for variables.
CC := gcc
CC := ${CC}
```