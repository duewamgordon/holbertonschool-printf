#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>


typedef struct print_function
{
	char *specifier;
	int (*f)(va_list args);
} func_v;

int _printf(const char *format, ...);
int _print_char(va_list args);
int  _print_int(va_list args);
int _print_string(va_list args);
int _putchar(char c);
int check_struct(char format, va_list args);
int check_format(const char *format, va_list args);
int check_char(char type);
void _print_mod(unsigned int temp);

#endif
