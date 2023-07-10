#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**STRUCTURE*/
/**
 * struct func - Structure of the format given to printf
 * @mod: The format specifier given
 * @f: The function that will be called
 */

int _printf(const char *format, ...);

#endif
