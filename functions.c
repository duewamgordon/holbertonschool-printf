#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_char - Prints a character.
 * @args: A va_list containing the character to print.
 *
 * Return: The number of characters printed.
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}

/**
 * _print_string - Prints a string.
 * @args: A va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int _print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

