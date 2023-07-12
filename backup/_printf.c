#include "main.h"

/**
 * _printf - Prints formatted output to stdout.
 * @format: A character string containing format specifiers.ab
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int arglen = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	arglen = check_format(format, args);
        va_end(args);

	return (arglen);
}
int check_struct(char format, va_list args)
{
	int len = 0, i = 0;
	
	func_v types[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_int},
		{"i", _print_int},
		{NULL, NULL}
	};
	
	while (types[i].specifier)
		if (*types[i].specifier == format)
			len = types[i].f(args);
	i++;
	return (len);
}

int check_format(const char *format, va_list args)
{      
	int count = 0;

	while (format && format[count])
	{
		if (format[count] == '%')
		{	
			if (format[count + 1] == '\0')
				return (-1);
			count++;
			if (format[count] == '%')
				count += _putchar(format[count]);
			if (check_char(format[count]) == 0) {
				count += _putchar('%');
				count += _putchar(format[count]);
			}	
			else
				count += check_struct(format[count], args);		
		}
		else
			count +=_putchar(count);
		count++;		
	}
	return (count);
}			

int check_char(char type)
{
	char types[] = {'c', 's', 'd', 'i', '&'};
	int i = 0;

	while(types[i])
	{
		if (types[i] == type)
		return (1);
		i++;
	}
	return (0);
}
