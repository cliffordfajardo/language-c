# Macros

Using macro definitions for constants provides a variety of advantages to the programmer over writing the numerical constant directly. For one, if the programmer ever needs to change the constant, only the macro definition must be changed, rather than all of the places where the constant is used. Another advantage is that naming the constant makes the code more readable. The naming of the constant in return EXIT_SUCCESS gives you a clue that the return value here indicates that the program succeeded. In fact, this is exactly what this statement does. The return value from main indicates the success or failure of your program to whatever program ran it.

A third advantage of using macro defined constants is portability. While 0 may indicate success on your platform—the combination of the type of hardware and the operating system you have—it may mean failure on some other platform. If you hardcode the constant 0 into your code, then it may be correct on your platform, but may need to be rewritten to work correctly on another platform. By contrast, if you use the constants defined in the standard header files, then when you recompile your program on the new platform, it will just work correctly—the header files on that platform will have those constants defined to the correct values.














# Macros

### What is a Macro?

### Macros vs Function
- Macros are pre-processed
- Functions are not pre-processed they are compiled
https://www.geeksforgeeks.org/macros-vs-functions/

https://www.coursera.org/learn/writing-running-fixing-code/supplement/BWulO/more-about-macros-and-header-files


Nice visual
https://www.google.com/url?sa=i&source=images&cd=&cad=rja&uact=8&ved=2ahUKEwiyzJGcjZHnAhXX3J4KHeqtCjAQjhx6BAgBEAI&url=https%3A%2F%2Fwww.slideshare.net%2Ftusharkute%2Fmodule-05-preprocessor-and-macros-in-c&psig=AOvVaw2tfNg1yQOpxMq6lZTqU9J3&ust=1579572679948726