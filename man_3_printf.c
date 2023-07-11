_print(3)	GNU

NAME
        _print - formatted output conversion

SYNOPSIS
        #include "main.h"

        int _printf(const char *format, ...);

DESCRIPTION
.SH DESCRIPTION
The function _printf() produce output to stdout, which is the standard output stream.

.SH Format of the format string
The format string is a character string. It is composed of zero or more directives, which are copied to the output string. Conversion specifiers are introduced with the '%' symbol and end with a conversion specifier. For this project, the conversion specifiers 'c', 's', 'd', and 'i' are used.

.SH RETURN VALUE

A successful return results in the number of characters printed. If an error occurs, -1 is returned.

.SH Conversion Specifiers

		Are characters that specify the type of conversion that needs to be applied.
	C: Converts the c character into an unsigned char unless an l modifier is present.
	S: The const char " argument is a pointer to a string if the l modifier is not present. The null terminating byte is not included in the string.

	D: The integer argument is converted into a signed decimal notation.

	I: Is the integer specifier.


RETURN VALUE

	A successful return results in the number of characters printed. If an error occurs negative -1 is returned.

AUTHORS

	Connor John and DuEwa Gordon
