#include "main.h"
/**
 * _memset - A function that fills block of memory with value
 * @s: Pointer(Address)
 * @b: Character variable
 * @n: Represents the number of bytes
 * Return: A pointer array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
