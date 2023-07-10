Holberton project C - printf

Authors of project printf
Connor john, DuEwa Gordon


Includes main.h/README.md files

in main.h includes the following.
fndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

Description of project printf
The purpose of this project is to create the function printf.
The printf() function prints a string on the screen using a format string" the includes the instructions to mix several strings and producethe final string to be printed on the screen.

We ill be completing 3 tasks in the project.

Task 0 - Write a function that projeces output according to a format.
. Prototype: int _printf(const char *format, ...);
. Returns: the number of characters printed (excluding the null byte used to end output to strings)
. write output to stdout, the standard output stream
. format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
.  c
.  s
.  %
. You don’t have to reproduce the buffer handling of the C library printf function
. You don’t have to handle the flag characters
. You don’t have to handle field width
. You don’t have to handle precision
. You don’t have to handle the length modifiers


Task 1 - Handle the following conversion specifiers:
.  d
.  i
. You don’t have to handle the flag characters
. You don’t have to handle field width
. You don’t have to handle precision
. You don’t have to handle the length modifiers


Task 2 - Create a man page for your function
. File should be called "man_3_printf.










