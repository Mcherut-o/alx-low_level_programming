#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function
 * @separator: The string to be printed
 * @n: Number of strings
 * @...: A variable
 * Desc: If separator is NULL, it is not printed.
 *     : If one of the strings if NULL, (nil) is printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int ndx;

	va_start(s, n);

	for (ndx = 0; ndx < n; ndx++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ndx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
