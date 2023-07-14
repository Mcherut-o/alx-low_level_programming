#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - A function that allocates memory using malloc
 *@b: number of bytes to be allocated
 *Description: Process termination occurs  with a status value of 98
 *Return: A pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}

	return (pt);
}
