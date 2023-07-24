#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers
 * @separator:String to be printed
 * @n: Number of integers passed to the function
 * @...: A variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int ndx;

	va_start(num, n);

	for (ndx = 0; ndx < n; ndx++)
	{
		printf("%d", va_arg(num, int));

		if (ndx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
