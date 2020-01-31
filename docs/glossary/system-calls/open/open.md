# open

The `open` system call is what's use to read and write to files, sockets, basically anything that returns a file descriptor.
Most c standard libaries provide nicer abstractions that make use of these system calls. For example
`fopen` uses `open`.

Most of the time, you won't use it directly.


### fopen vs open
- `fopen` is c standard library function, while `open` is a system call.
- `fopen` offers us buffered IO, which is faster than `open` which is non-buffered.
- `fopen` is portable (C standard library is on almost every platform), while `open` is environment specific. For example, C standard library on Window's will have `fopen` but under the hood instead of using `open` (a POSIX system call for unix-based systems) it will use another system call name

When we are calling `open` in `open.c` and then using `read` in our loop, we are reading 1 character at a time.
So that means for every character read from the file we are doing a system call. Remember,
a system call means a call to the kernal, a context switch out of our program.

`fopen` the higher level lib c function which wraps `open`, it uses buffered IO, meaning it will
try to make less system calls by batching up read and write operations. For example it might read
several characters at a time and write several characters at a time versus.

When might we use open? When we don't care about buffering and timing matters.