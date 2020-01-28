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


