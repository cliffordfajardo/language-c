# Make Files Example 2

Building on from the first example, we'll add 2 more phony targets; recall phony targets are targets that don't create a file.

### Example
Use the following command in the terminal to run `Makefile1: `make -f Makefile1`. We need to use the `-f` flag since our file isn't called `Makefile` anymore.

```
say_hello:
	@echo "Hello World"

generate:
	@echo "Creating empty text files..."
	touch file-{1..5}.txt

clean:
	@echo "Cleaning up..."
	rm *.txt
```

If we try to run make after the changes, only the target `say_hello` will be executed.
That's because the first target in the makefile is the default target or default goal.

This is the reason you will see in many projects people name their first target `all`.

Or if we want to be very explicit, we can ovveride this default behavior of havin the first target be the default rule, using a special phony target called `.DEFAULT_GOAL`. Let's use `.DEFAULT_GOAL`.

Use the following command to run this make file `make -f Makefile2`

```
.DEFAULT_GOAL := generate

say_hello:
	@echo "Hello World"

generate:
	@echo "Creating empty text files..."
	touch file-{1..5}.txt

clean:
	@echo "Cleaning up..."
	rm *.txt
```

If we want to run the `clean` recipe we run the following: `make -f Makefile2 clean`. In general, it's a good practice to not run a command that does clean up, it should be done manually for the most part since it's a destructive operation.
