# A More Complex Make File with Variables
We are going to cover a few useful features that we can use with make files.


BREAK THIS DOWN: https://www.youtube.com/watch?v=G5dNorAoeCM

### Wildcards
Assume we had the following files in our directory: `hello1.c` and `hello2.c`.
We can use the `wildcard` function to expand a set of comma separated results. If we had the following Makefile:

```
SOURCES := $(wildcard *.c)
```

it would be expanded to:

```
SOURCES := hello1.c, hello2.c
```

### Substitution Reference

A substitution reference substitutes the value of a variable with alterations that you specify.
It has the form ‘$(var:a=b)’ (or ‘${var:a=b}’) and its meaning is to take the value of the
variable `var`, replace every `a` at the end of a word with b in that value, and substitute the resulting string._

Tip: they key part is the colon `:`   

```
foo := one.o two.o three.a four.o
bar := $(foo:.o=.c)   # Replace everything ending in `.o` with `.c`
```

would set bar to the following result: `one.c two.c three.a four.c`

