# String in C -- https://www.learn-c.org/en/Strings


### What are Strings?


### Example 1: Pointer Notation
This method creates a read only string

```
char * name = "John Smith";
```

### Example 2: The more verbose way.
a string which can be manipulated, we will need to define it as a local character array
```
char name[] = "John Smith";
```
This notation is different because it allocates an array variable so we can manipulate it.
`<IMAGE other and this>` 
The empty brackets notation [] tells the compiler to calculate the size of the array automatically.
This is in fact the same as allocating it explicitly, adding one to the length of the string:

```
char name[] = "Anna";
/* is the same as */
char name[5] = "Anna";
```

The reason that we need to add one, although the string John Smith is exactly 10 characters long, is for the string termination: a special character (equal to 0) which indicates the end of the string. The end of the string is marked because the program does not know the length of the string - only the compiler knows it according to the code.


Duke visualization