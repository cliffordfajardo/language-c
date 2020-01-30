# System Calls
### What are system calls?
A system call is a low level function that request's the operating to do something.
In high level languages, you rarely think about this or interact with these syscalls directly,
however most of the common functions you use to:
- read, write from or to {disk, standard in, out, error, memory}
- making a network request

all use system calls under the hood. When you make a system call you hand control to the operating system's kernal for a brief moment
then after it's done, it hands the control back to you.
https://www.quora.com/What-is-the-difference-between-functions-fread-and-read

### Resources
- easy explanation: https://www.youtube.com/watch?v=2AmP7Pse4U0


- https://www.cs.cmu.edu/~guna/15-123S11/Lectures/Lecture24.pdf
- VISUAL: https://www.guru99.com/system-call-operating-system.html









# What is a system call

### Why is it called a system call?



### How do I view the system calls on my computer?



### What are the differences between a syscall and c-standard library function?


### What are actions that would require our program to talk our operating system?
- send/recieve data over the internet
- read/write data to disk, screen, terminal output

As you can tell, anything that requires us to interact with the outside world.


### What are actions that would not require our program to talk our operating system? 
- read values from an array of ints
- compute the square root of a number
- multiply two numbers together
As you can tell, anything that's not interacting with the outside world doesn't need to make
a system call and thereby hand control of the program to our OS . 




### What types of activities require our program's to talk with our operating system?


## What types of activies don't require our program to talk with our operating system



TODO: inspect C standard library...........
This might be the most i'll talk about on OS
recall....this is a guide to help people learn C..they can branch off themseleves....

https://www.coursera.org/learn/interacting-system-managing-memory/supplement/tcOKh/introduction-to-the-operating-system



## Related
`errno` - 

These questions were inspired from Duke class

