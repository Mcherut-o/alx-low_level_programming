#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: Minimum value of range(included)
 * @max: Maximum value of range(included)
 * Return: Pointer to created array
 *       : If min > max || malloc fails,i return NULL
 */

int *array_range(int min, int max)
{
	int mag;
	int j;
	int *ray;

	mag = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	ray = malloc(mag * sizeof(int));

	if (ray == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < mag; j++)
	{
		ray[j] = min + j;
	}
	return (ray);
}

