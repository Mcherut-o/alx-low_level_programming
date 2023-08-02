#include "main.h"

/**
 * print_line - A function that drwas straight line in terminal
 * @n: integer variable rep the number of times the line
 * is going to be printed
 * Return: Void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
