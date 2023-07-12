#include "main.h"

/**
 * _strlen_recursion - A function returning the length of a string.
 * @s: String
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j += _strlen_recursion(s + 1);
	}

	return (j);
}
