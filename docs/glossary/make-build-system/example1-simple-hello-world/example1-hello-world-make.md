# Make Files Example 1

### What is a Make file?
A make file is an automation tool use to run multiple commands, it's often called a build system since you most people
use it to write scripts that will build and compile their tasks.

### Example
I've created a simple make file which automates a hello world command I created.

```
say_hello:
	@echo "Hello World!"
```

To run it, I can just run `make` command in this folder, which by defauly will look for a file called `Makefile`. 

```
> make
Hello World!
``` 

### Makefile Terminology
##### targets, prequisites, recipe and rule
Let's go back to the `Makefile` and break down what each section of it means, in terms of the `make` system terminology that you'll
read in the documentation or on the internet.

```
say_hello:
	@echo "Hello World!"
```

- The `say_hello:` declaration is called the `target`. It behaves like a function in most programming languages.
- The `echo "Hello World"` declaration is called the `recipe`. We prefix the command with `@` so the terminal only outputs `Hello World!` and not extra information like that the command came from `@echo "Hello World`.
- `prerequisites` or `dependencies` usually follow the `target` (after the semicolon :), but the sake of simplicity, we did not define any prerequisites in this example.
- `target`, `prerequisites` and `recipes` together make a `rule`. Below is the syntax for a rule:

```
target: prerequisites
<TAB> recipe
```



### Conclusion
With this first example, hopefully, you've gotten to see how `make` serves as a useful place for documenting and using your commands for yourself and other programmers.
Let's take a look at another example that will start showing you the power of `make` inside the `





### References
- https://opensource.com/article/18/8/what-how-makefile
- https://www.gnu.org/software/make/manual/make.pdf