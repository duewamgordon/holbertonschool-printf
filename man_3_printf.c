

NAME

	MAN FOR PRINT FUNCTION

SYNOPSIS

	int printf(const char *format, ...)
	
DESCRIPTION

	The function printf() writes output to stdout which is the standard output stream.

Format of the format string: 

	The format string is a character string. IT is composed of zero or more directives which ae copied to the output string and conversion specifiers introduced with the % symbol and ending with a conversion specifier. For this project the conversion specifieers c, s, d, and i are used.

Conversion Specifiers:

	Are characters that specify the type of conversion that needs to be applied.
	C: Converts the c character into an unsigned char unless an l modifier is present.
	S: The const char argument is a pointer to a string if the l modifier is not present. The null terminating byte is not included in the string.

	D: The integer argument is converted into a signed decimal notation.

	I: Is the integer specifier.


RETURN VALUE

	A successful return results in the number of characters printed. If an error occurs negative -1 is returned.

AUTHORS

	Connor John and DuEwa Gordon
