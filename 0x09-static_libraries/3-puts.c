#include "main.h"

/**
 * _puts - A function that prints a string that is
 * followed by a new line to the standard output
 * @str - String pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
