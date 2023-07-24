#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: The list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *p = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", p, s);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
