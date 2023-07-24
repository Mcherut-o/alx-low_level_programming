#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates sum of integers
 * @n: Number of integers
 * @...: A list of integers
 * Return: If n == 0, returns 0
 *       : Otherwise, Sum of all the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int j, m = 0;

	va_start(p, n);

	for (j = 0; j < n; j++)
		m += va_arg(p, int);

	va_end(p);

	return (m);
}
