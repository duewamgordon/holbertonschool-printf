#include <stdio.h>
#include "main.h"
#include <stdarg.h>
 
/**
 * Write a function that produces output according to a format
 *
 */
 
int _printf(const char *format, ...);
int num_chars = 0;
	va_list args;
	va_start(args, format);
 
	while (*format != '\0') {
    	if (*format == '%') {
        	format++;
        	if (*format == 'c') {
            	char c = (char)va_arg(args, int);
            	putchar(c);
            	num_chars++;
        	} else if (*format == 's') {
            	char *str = va_arg(args, char *);
            	while (*str != '\0') {
                	putchar(*str);
                	str++;
                	num_chars++;
            	}
        	} else if (*format == '%') {
            	putchar('%');
            	num_chars++;
        	}
    	} else {
        	putchar(*format);
        	num_chars++;
    	}
    	format++;
}
