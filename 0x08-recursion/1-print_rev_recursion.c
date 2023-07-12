#include "main.h"

/**
 * _print_rev_recursion - A function that will be printing strings in reverse.
 * @s: String
 * Return : Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
