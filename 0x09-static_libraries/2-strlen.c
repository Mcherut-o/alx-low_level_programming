#include "main.h"

/**
 * _strlen - A function that returns length of string
 * @s: String pointer
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
