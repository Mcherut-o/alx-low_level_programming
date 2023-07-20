#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function reallocating memory block using malloc and free
 * @ptr: A void pointer to original memory block
 * @old_size: Unsigned integer showing size of original block in bytes
 * @new_size: Unsigned integer showing size of new block in bytes
 * Return: A pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nblock;
	char *oblock = (char *)ptr;
	unsigned int j;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		nblock = malloc(new_size);
		return (nblock);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nblock = malloc(new_size);
	if (nblock == NULL)
		return (NULL);

	for (j = 0; j < old_size; j++)
	{
		nblock[j] = oblock[j];
	}

	free(oblock);
	return (nblock);
}
