# Stage 3: Repl


In `stage1` we created a simple REPL that just logs our commands back to the console.
In `stage2` we will add control flow to check what the user typed in.
In `stage3` we will create a new file `parser` to handle checking the user input.

## Learning Notes
#### fgets
In my parser, I kept getting errors when comparing the user input with a value. Turns out `fgets` add's a `\n` character 
at the end so we need to trim it. There are other read from stdin function but other alternatives are error prone and
highly frowned upon so use `fgets` - https://bit.ly/2v9fjjo. See `stage-3`

