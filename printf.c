#include <stdio.h>
#include "MAIN_H"

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

	va_start(args, format);

	if (format == NULL)
		return (-1);

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
				_putchar(c);
				printed++;
			}
			else
			{
				_putchar('%');
				_putchar(format[len]);
				printed += 2;
			}
		}
		else
		{
			_putchar(format[len]);
			printed++;
		}
		len++;
	}

	va_end(args);

	return (printed);
}
