#### Phony targets
A `target` that doesnt create a file with the same name,  we just call a "phony target". This is an example of file with a phony target.

```
hello:
	touch hello.txt 
```

The distinction between a "phony" and "non-phony" target is important for `make`. A target which ends up creating a file with the same name as target is a non-phony target (or just target). Suppose we had the following `Makefile` and we happened to already have a file in the same directory called `clean`.

```
say_hello:
  @echo "hello world"

clean:
	@echo "Cleaning up.."
	rm *.txt
```

If we tried to run the clean target like so `make clean` , the command wouldn't work as we would get the following message:

```
make: `clean' is up to date.
```

This is because `make` thinks that the `clean` target was already run and generated a file called `clean`.
It's better for us to be explicit with `make` and tell it which target's aren't actually generating files.
So, to get around this we can use a special target called `.PHONY` and set it's prerequisite(s) to all the
target's which we as know are phoney targets. Let's add a new line at the top of our `Makefile`

```
.PHONY: say_hello clean

say_hello:
  @echo "hello world"

clean:
	@echo "Cleaning up.."
	rm *.txt
```

Now, when we run `make clean`, it will run the target with no problems, even with our `clean` file still in our directory.