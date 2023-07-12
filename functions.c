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
	int c = va_arg(args, int);

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

	if (str != NULL)
	{
		while (str[len])
		{
			_putchar(str[len]);
		 	len++;
		}
		return (len);
	}
	
	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');

	return (6);
}
int _print_int(va_list args)
{
	int count = 1, unsigned_int = 0;
	unsigned int temp = 0;
	
	temp = va_arg(args, int);
	unsigned_int = temp;
	
	if (unsigned_int < 0)
	{	
		_putchar('-');
		unsigned_int = unsigned_int * -1;
		temp = unsigned_int;
		count++;
	}
	
	while (temp > 9)
	{
		temp = temp / 10;
		count++;
	}
	_print_mod(unsigned_int);
	
	return (count);
}

void _print_mod(unsigned int temp)
{
	int num; 
	num = temp;

	if (num / 10)
	{
		num = (num / 10);
		_print_int(num);
	}
	_putchar(num % 10 + '0');
}

