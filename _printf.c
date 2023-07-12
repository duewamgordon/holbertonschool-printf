#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Prints formatted output to stdout.
 * @format: A character string containing format specifiers.ab
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					{
					char c = (char)va_arg(args, int);
				_putchar(c);
				printed++;
				break;
					}
				case 's':
					{

					char *str = va_arg(args, char*);
				while (*str != '\0')
				{
				_putchar(*str);
				printed++;
				str++;
				}
			break;
					}
				case '%':
					{
					_putchar('%');
				printed++;
			break;
					}
				default:
				_putchar('%');
				_putchar(*format);
				printed += 2;
			break;
			}
		}
		else
		{
		_putchar(*format);
		printed++;
		}
	
	format++;
	}
	va_end(args);

	return printed;
}	
