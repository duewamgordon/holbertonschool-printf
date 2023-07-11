#include <stdio.h>
#include <stdarg.h>

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
				putchar(c);
				printed += 2;
			}
			else if (format[len] == 's')
				printed += 2;
			else
			{
				putchar('%');
				putchar(format[len]);
				printed += 2;
			}
		}
		else
		{
			putchar(format[len]);
			printed += 2;
		}
		len++;
	}

	va_end(args);

	return (printed);
}
