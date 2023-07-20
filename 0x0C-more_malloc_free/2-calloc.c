#include <stdlib.h>
#include "main.h"

/**
 * _memset -Function that takes a pointer to a memory block
 * @m: A pointer
 * @n: Represents value we shall fill memory block with
 * @p: bytes of memory that need to be filled
 * Return: A pointer
 */

char *_memset(char *m, char n, unsigned int p)
{
	unsigned int pst;

	for (pst = 0; pst < p; pst++)
	{
		m[pst] = n;
	}
	return (m);
}

/**
 * _calloc - Allocates memory
 * @nmemb: Number of elements found in the array
 * @size: Size of every element
 *
 * Return: Pointer pointing to allocated memory
 *       : NULL if calloc function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

