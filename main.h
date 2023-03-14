#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
typedef struct ptr
{
   	char *c;
   	int (*f)(char *, int, va_list);
}
pt_char;
int _putchar(char c);
int _printf(const char *format, ...);
#endif
