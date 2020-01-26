# Structs

## What is a Struct?
A struct (AKA structure) is a data type that allows you to bundle multiple variables into a single entity.
If your coming from other languages, the `structs` concept is similar to objects in other languages.


```c
#include <stdio.h>
int main () {
  struct Point3D {
    int x;
    int y;
    int z;
  };
  
  // Dot notation assignments
  struct Point3D p1;
  p1.x = 0;
  p1.y = 0;
  p1.z = 0;

  // Struct notation assignment
  struct Point3D p2 = {.x=1, .y=2, .z=3};

  printf("p1 = (%d,%d,%d) and p2 = (%d,%d,%d)\n", p1.x, p1.y, p1.z, p2.x, p2.y, p2.z);
  return 0;
}
```

### Example: Using typedef to shorten structure declarations
Here we no longer need to use the `struct` keyword because we used `typdef` in our original struct declaration

```c
#include <stdio.h>
int main () {

typedef struct {
    int x;
    int y;
    int z;
  }  Point3D;
  
  // Dot notation assignments
  Point3D p1;
  p1.x = 0;
  p1.y = 0;
  p1.z = 0;

  // Struct notation assignments
  Point3D p2 = {.x=1, .y=2, .z=3};

  printf("p1 = (%d,%d,%d) and p2 = (%d,%d,%d)\n", p1.x, p1.y, p1.z, p2.x, p2.y, p2.z);
  return 0;
}
```



### Example: Structs with multiple Data types
```c
#include <stdio.h>

int main (){
typedef struct {
    int a;
    int b;
    double myVector[5];
  }  myStruct;

 myStruct s1;
 s1.a = 10;
 s1.b = 20;
 // add items to our array (AKA vector)
 for (int i=0; i<5; i++) {
   s1.myVector[i] = i;
 }

 return 0;
}
```


### Example: Array of Structs
```c
#include <stdio.h>

int main () {
  typedef struct {
    int x;
    int y;
    int z;
  }  Point3D;

  Point3D myPoints[10];
  int i;
  for (i=0; i<10; i++) {
    myPoints[i].x = i;
    myPoints[i].y = i;
    myPoints[i].z = i;
  }
  return 0;
}
```



### Why is C, which seems so similar to C++, is considered a low-level "procedural" language where as C++ is high-level "object-oriented"
In this response, I love how the responder says the following:

Let's together you and I read through the Wikipedia page on OOP and check off the features of
C-style structs that correspond to what is traditionally considered to be object-oriented style:

```
(OOP) is a programming paradigm using:
-  "objects" – data structures consisting of data fields and methods together with their interactions
```

Do C structs consist of fields and methods together with their interactions? No.

```
Programming techniques may include features such as:
- data abstraction
- encapsulation
- messaging
- modularity 
- polymorphism
- inheritance.
``
Do C structs do any of these things in a "first class" way? No. The language works against you every step of the way.

```
the OOP approach encourages the programmer to place data where it is not directly accessible by the rest of the program
```

Do C structs do this? No.

```
An object-oriented program will usually contain different types of objects, each type
corresponding to a particular kind of complex data to be managed or perhaps to a real-world object or concept
```

Do C structs do this? Yes.

```
Objects can be thought of as wrapping their data within a set of functions designed to ensure that the data are used appropriately
```

Do C structs do this? No.

```
each object is capable of receiving messages, processing data, and sending messages to other objects
```

Can a struct itself send and receive messages? No. Can it process data? No.

```
OOP data structures tend to "carry their own operators around with them"
```
Does this happen in C? No.


```
Dynamic dispatch ... Encapsulation ... Subtype polymorphism ... Object inheritance
... Open recursion ... Classes of objects ... Instances of classes ... Methods which
act on the attached objects ... Message passing ... Abstraction
```

Are any of these features of C structs? No.

Now, of course you can:
- make structs that have fields that are pointers to functions. 
- make structs have fields that are pointers to arrays of function pointers, corresponding to virtual method tables. 
- And so on. 

You can of course emulate C++ in C. But that is a very non-idiomatic way to program in C; you'd be better off just using C++.








### Details
<!-- This phrasing is contextual to the course ........extract this convention stuff to a single document.... -->
You may be starting to notice that the definitions of many data types are essentially a set of agreed upon conventions.
One of the great things about rich programming languages like C is that they give a programmer the power to create new
data types and associated conventions. Some conventions, like the IEEE floating point standard, are agreed upon across
multiple programming languages, compilers, machine languages, and the architecture of the processors they run on.
This requires the coordination of hundreds of companies and tens of thousands of engineers. 

Other conventions can be more local, existing only in a particular code base, or a collection of files that all use a common library.
This may require the coordination of multiple people (who are usually working together already) or may only affect a single person
who simply wishes to produce clean, modifiable, and debuggable programs.

Suppose you are designing a program that regularly draws and computes various properties of rectangles.
It would be very convenient to have a data type that captures the basic properties of a rectangle. In C,
this is accomplished via the keyword `struct`

<image src="../../../../images/struct-conceptual-image.png">







### Memory Layout of Struct
- https://brilliant.org/practice/memory-layout/?p=7