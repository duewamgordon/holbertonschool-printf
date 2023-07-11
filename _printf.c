#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Prints formatted output to stdout.
 * @format: A character string containing format specifiers.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, printed = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format[len] != '\0')
	{
		if (format[len] == '%')
		{
			len++;
			if (format[len] == '\0')
				return (-1);

			if (format[len] == 'c')
			{
				char c = va_arg(args, int);
<<<<<<< HEAD
				_putchar(c);
				printed++;
			}
			}
			else if (format[len] == 's')
=======
				putchar(c);
				printed += 1;
			}
			else if (format[len] == 's')
				printed += 1;
			else
>>>>>>> parent of fcc9bef... printf.c
			{
				char *str = va_arg(args, char *);
				while (*str != '\0')
			{
				_putchar('%');
				printed ++;
				str++;
			}
		}
		else
		{
<<<<<<< HEAD
			_putchar(format[len]);
			printed ++;
=======
			putchar(format[len]);
			printed += 1;
>>>>>>> parent of fcc9bef... printf.c
		}
		len++;
	}

	va_end(args);

	return (printed);
	}
