# Libraries

In this lab you will learn:

- How to create your own library
- How to include your local library in your c file

## What is a library?

A **library** is a 'predone' set of code that has already been completed.  The benefit of using a library is that it can increase the 'readability' of your main function by calling functions from outside of your main function.  

An analogy would be that we know a car drives, but we don't really need to look under the hood to see how it drives.  Another advantage is that the code can be used over and over again indefinitely.  A function that you have called over and over again from the CS50 library is 'printf'.  Remember, to use a function from a library, you need to include that library at the start of the program so that the compiler knows to link the predone code with your code, when it generates machine code.  

```c
#include<stdio.h>
#include<CS50.h>

int main(void>
{
printf("Print f is a function that is being called from the CS50 library.");
}
...
```
{% next %}

The libraries that are included in your system files are called with the less than and greater than symbols. It is possible to call a local library (one that is in the current folder/working directory) by using quotation marks.  The '.h' stands for header file, because it is included at the top, or head of the file.

```c
#include<stdio.h>
#include<CS50.h>
#include "ThisWouldbeALocalLibrary.h"
...
```

{% next %}

## Your Turn!

1. Alter the code in multiplication.c.  Create a function that takes two numbers that are input, multiplies them together, and returns the product.
2. Prototype, or declare the function at the top of the file, just before the main function.

{%spoiler"Hint"%}
Remember to prototype a function, you include the ;

```
int multiply_numbers(int a, int b);
```
{%endspoiler%}

Make sure to compile and test the program.

## Style Check
Be sure to check your style:

```
style50 array.c
```
## Check Your program before submitting
```
check50 jmichalenko/labchecks/main/array
```
## Submit your work
```
submit50 jmichalenko/labchecks/main/libraries
