# Enums

**Enumerated types are named constants** that can increase the readability and the correctness of your code.
They are most useful when you have a type of data with a set of values that you would like to label by their
conceptual name (rather than using a raw number) and either the particular numerical values do not matter
(as long as they are distinct), or they occur naturally in a sequential progression.

The enumerated names are constant—they are not assignable variables. Their values cannot change throughout the program. The convention for indicating that a name denotes a constant is to write the name in all uppercase. However, variables of the enumerated type can be created, and assigned to normally.

### Example 1
By default, the first item in the list is assigned the value 00, the second item is assigned the value 11, and so on. The code below demonstrates this:

```c
#include<stdio.h>
enum color {
  red,
  green,
  blue
};

int main()  {
  // Initializing a variable that will hold the enums
  enum color current_color = red;
	printf("Value of red = %d \n", current_color);	

	current_color = green;
	printf("Value of green = %d \n", current_color);	

	current_color = blue;
	printf("Value of blue = %d \n", current_color);	
	return 0;
}
```

### Example 2
`enum` is used for values that are not going to change (e.g., days of the week, colors in a rainbow, number of cards in a deck, etc.).
enum is commonly used in switch-case statements. The code below shows an example:

```c
#include <stdio.h> 
enum day {SUNDAY , MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY}; 
  
int main()  {
  // Enums can also take their integer equivalent values
  enum day today = 4;

  switch(today) {
    case SUNDAY:
      printf("The day today is SUNDAY");
      break;
    case MONDAY:
      printf("The day today is MONDAY");
      break;
    case TUESDAY:
      printf("The day today is TUESDAY");
      break;
    case WEDNESDAY:
      printf("The day today is WEDNESDAY");
      break;
    case THURSDAY:
      printf("The day today is THURSDAY");
      break;
    case FRIDAY:
      printf("The day today is FRIDAY");
      break;
    default:
      printf("The day today is SATURDAY");
  }
    return 0; 
} 
```

### Example 3
Enums also have this autoincrementing feature. Recall that each item in an item increments by one from the previous:

```c
#include<stdio.h>
enum day {
  Mon,      //0
  Tue,      //1
  Wed,      //2
  Thurs,    //3
  Fri=18,   //18
  Satu=11,  //11
  Sun       //12
};
int main() {
   printf("The default value of enum day: %d\t%d\t%d\t%d\t%d\t%d\t%d", Mon , Tue, Wed, Thur, Fri, Sat, Sun);
   return 0;
}
```